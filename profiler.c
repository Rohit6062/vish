#include"prof.c"

int main(){
	char filename[20];
        printf("filename : ");
        scanf("%s",filename);
	char *func = "\nafter_semicolon();\n";
	FILE *fptr = fopen(filename,"r");
	FILE *fp = fopen("outputfile.c","w+");
	char ch;

	if(fptr == NULL){
		perror("Empty file");
		fclose(fptr);
		exit(1);
	}


	while(fread(&ch,sizeof(ch),1,fptr)){
		fputc(ch,fp);
		if(ch == ';')
			fputs(func,fp);
	}

	fputs("\nprintf("%d\n",p_count);
	return 0;
}
