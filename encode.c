// function encodes the number and put in an vdiskay and gives the position in last byte until sequence is inserted

void encode (long num,long pos){
        fseek(f,vdstlen-1,SEEK_SET);
        vdisk = getc(f);
        fseek(f,vdstlen-1,SEEK_SET);
        long output = num;
        long bitsneeded = 0;
        long len = 0;
        cnt = 1;
        currpos = 8;
        while(num > 3){
                bitsneeded = log_2(num);
                num = bitsneeded;
                len = len + bitsneeded;
                bitsneeded = bitsneeded << len;
                output = output | bitsneeded;
                cnt++;
        }
        bitsneeded = cnt << max(2,(log_2(output)));
        output = output | bitsneeded;
        len += (max(2,log_2(num))+3);
         // printf("len-> %ld\n",len);
        pl(output);
//      printf("levels of encoding :%ld\n",count);
        while(len != 0){
                if (len > pos){
                        len -= pos;
                        new = (byte)(output >> len); 
                        vdisk = vdisk|new;
                        pos = 8;
                        putc(vdisk,f);
                        vdisk = 0;
                        vdstlen++;
                }
                else{
                        pos -= len;
                        len = 0;
                        new = (byte)(output << pos);
                        vdisk = vdisk | new;
                        putc(vdisk,f);
                        if (pos == 0){ pos = 8; vdstlen++;}
                }
        }
    currpos = pos;
    cnt++;
}
