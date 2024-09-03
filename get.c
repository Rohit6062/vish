bool view(int n){
    fseek(f,0,SEEK_SET);
    currbit = 8;
    if(fileCount < n)return false;
    byte* buffer = calloc(1024, sizeof(byte));
    int bufflen  = 1024;
    int tmp = n;
    int nlen=0;
    int len=0;
    int bound=0;
    while(tmp--){
        nlen = decode(currbit,f);
        len = decode(currbit,f);
        bound += nlen + len;
    }
    tmp = 0;
    fseek(f,-bound-2,SEEK_END);
    fread(buffer,nlen,1,f);
    printf("%s \n",buffer);
    bound -= nlen;
    while(len>0){
        if(len<bufflen)bufflen=len;
        fread(buffer,bufflen,1,f);
        printf("%s",buffer);
        len-=bufflen;
    }
    printf("\n");
    return true;
}

bool get(byte* name){
    int len  = strlen(name);
    byte* buffer  = (byte*) malloc(sizeof(byte)*51);
    fseek(f,0,SEEK_SET);
    currpos = 8;
    ui totfls = fileCount; // total files
    ul ending = 2;
    ui namelen;
    ul tmpPos;
    while(totfls--){
        namelen = decode(currbit,f);
        ending+=namelen;
        ending+=decode(currbit,f);
        if(namelen == len){
            tmpPos = ftell(f);
            fseek(f,-ending,SEEK_END);
            fgets(buffer,len+1,f);
            if(strncmp(buffer,name,len)==0)return view(totfls);
            fseek(f,tmpPos,SEEK_SET);
        }
    }
    return false;
}
