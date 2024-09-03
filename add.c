bool add(byte *fname,int nlen,byte *file,int flen){
    fseek(f,0,SEEK_SET);
    currpos = 8;
    ul totbits,curr;
    ul fend = 0;
    byte newpos;
    ul tmp ;
    while (curr != 0 && totbits < (FILESIZE*8) ){
        newpos = currpos;
        tmp = ftell(f);
        curr = decode(currpos,f);
        totbits = (curr * 8) + getBitReq(curr);
        fend += curr;
    }
    if(totbits >= (FILESIZE*8) ){
        printf("not enough space");
        return false;
    }
    if(tmp!=ftell(f))fseek(f,-1,SEEK_CUR);
    encode(nlen,newpos);
    encode(flen,currpos);
    fseek(f,-fend-nlen,SEEK_END);
    fwrite(fname,nlen,1,f);
    fseek(f,-fend-nlen-flen,SEEK_END);
    fwrite(file,flen,1,f);
    return true;
}
