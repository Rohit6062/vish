#include<stdio.h>
#include<stdlib.h>

void pb(unsigned char val){
    unsigned char x = 1;
    x = x << 7;
    while(x){
        printf("%d",(val & x) == x);
        x = x >> 1;
    }
    printf(" ");
} 

int main(int argc,char** argv){
    FILE* f = fopen(argv[1],"r");
    int c= atoi(argv[2]);
    for(int i=0;i<c;i++){
        
        pb(getc(f));
        printf(" \n");
    }
        printf(" \n");
    return 0;
}
