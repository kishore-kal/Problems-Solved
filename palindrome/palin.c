#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10]="akka";
	int l,i,j;

	l=strlen(str);
	i=0;
	j=l-1;
	printf("\nforward \t reverse ");
	

	for(;i<l&&j>(-1);i++,j--){
		printf("\n %c \t %c ",str[i],str[j]);
	}

	if(str[0]==str[3])
		printf("Rock  l;;l");
	else
		printf("Booooo");
	getch();
	return 0;
}