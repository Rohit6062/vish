#include"base.c"
#include"encode.c"
#include"decode.c"
#include"get.c"
#include"add.c"
#include"count.c"
#include"ls.c"
int main(){
    init();
    fileCount = countsm(f);
    fseek(f,0,SEEK_SET);
    currpos=8;
    add("name.txt",strlen("name.txt"),"Have you finished eating your apple.",strlen("Have you finished eating your apple.")),add("name.txt",strlen("name.txt"),"Have you finished eating your apple.",strlen("Have you finished eating your apple.")),add("name.txt",strlen("name.txt"),"Have you finished eating your apple.",strlen("Have you finished eating your apple."));
    ls();
    printf("    get(name.txt) = %d\n",    get("name.txt"));
    return 0;
}

