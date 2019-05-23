#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    int i,j,tag,a,b;
    gets(str1);
    gets(str2);  
    a=0;b=0;
    for(i=0;str1[i]!='\0';i++){     //total alphabets in str1
        if(str1[i]!=' ') a++;
    }
    for(j=0;str2[j]!='\0';j++){     //total alphabets in str2
        if(str2[j]!=' ') b++;
    }
    if(a!=b){
        printf("\nNot a anagram");
        exit(1);
    }
    tag=1;
    for(i=0;str1[i]<strlen(str1);i++){
        if(str1[i]==' ')i++;
        tag=0;
        for(j=0;j<strlen(str2);j++){        //replace with '$' if the 
            if(str2[j]==' ') str2[j]='$';   //character is present
            if(str1[i]==str2[j]){
                str2[j]='$';
                tag=1;
                printf("\n %s",str2);
                continue;
            }
        }
        if(tag!=1){
            printf("\nNOt an anagram");
            exit(1);
        } 
    }
    printf("\nAnagram");
    return 0;
}
