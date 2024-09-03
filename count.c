ul countsm (FILE *f){
    ul curr = 1;
    ul totalbits = 0;
    ul output = 0;
    fseek(f,0,SEEK_SET);
    while(curr != 0 && totalbits < FILESIZE*8){
        curr = decode(currpos,f);
        totalbits +=(curr*8 + getBitReq(curr));
        output++;
    }
    return output/2;
}



