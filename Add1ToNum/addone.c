#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* A, int n1, int *len1) {
    int carry=1,j;
    int i,sum,*out,temp;
    out = (int *)malloc(sizeof(int) * n1 + 1);
    i=0;
    while(i<n1+1){
        out[i]=0;
        i++;
    }
    
    //reverse
    i=0;
    j=n1-1;
    while (i < j) 
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;             
        j--;         
    }
    
    //adding
    for(i=0;i<n1;i++){
        sum = A[i] +carry;
        out[i] = sum%10;
        carry = sum/10;
    }
    
    if(carry==1){
        out[n1]=1;
        *len1 = n1 + 1;
    }else{
        out[n1]=0;
       // *len1 = n1;
    }
    
    //reversing
    i=0;
    j=n1;
    while(i < j){
        temp = out[i];
        out[i] = out[j];
        out[j] = temp;
        i++;             
        j--;
    }
    
    
    i=0;
    while(i<=n1){
        if(out[i]==0){
            i++;
        }
        else{
            break;
        }
    }
    *len1=n1+1 - i;
    return out+i;
}
int main(){
    int arr[]={0,0,9,9,9,9,9},*pArr;
    int n,i;
    pArr = (int *)malloc(sizeof(int)*7);
    pArr = plusOne(arr,7,&n);
    for(i=0;i<n;i++){
        printf("%d ",pArr[i]);
    }
    printf("\n%d ",n);
}