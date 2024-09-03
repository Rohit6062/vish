ul decode(long pos ,FILE* f){
    long x = 3;
    temp = 0;
    new = vdisk & (255 >>(8 - pos));
    cnt = 1;
    int j = 0;
    while( cnt != 0){
        if (pos == x){
            temp = temp | new;
            vdisk = getc(f);
            new = vdisk;
            x = 0;
            pos = 8;
        }
        else if (x < pos){
            pos = pos - x;
            temp = temp | (new >> pos);
            new = 255 & (new << (8 - pos));
            new = new >> (8 - pos);
            x = 0;
        }
        else{
            x = x- pos;
            temp = temp | (new << x);
            pos = 8;
            vdisk = getc(f);
            new = vdisk;
        }
        if (x == 0){
            j++;
            x = temp;
            cnt--;
            if( j == 1){x = 2;cnt = temp;}
            temp = 0;
        }
    }
    currpos = pos; 
    return x;
}
