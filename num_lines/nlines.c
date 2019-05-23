#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	FILE *fp;
	char c,line[20];
	int nlines=0,randLine,i;
	long random;
	fp=fopen("animals.txt","r");
	c = getc(fp);
	while(c!=EOF){
		if(c=='\n'){
			nlines++;
		}
		c=getc(fp);
	}
	printf("\nThe number of animals in the file is %d",nlines);
	randLine=random % nlines;
	printf("\nthe random number %d\n",random);
	printf("chose %d of %d lines\n",randLine,nlines);
	fseek(fp,0,SEEK_SET);
	for(i=0;i<randLine&&!feof(fp);i++){
		fgets(line,20,fp);

	}
	printf("\nThe random word is %s",line);


	return 0;
}
