//INPUT 
//  PRICE_MONEY
//  N 
//  N DISH PRICES
#include<stdio.h>
#include<stdlib.h>
int main(){
    int price,n,*arr,temp,i,j,sum;
    scanf("%d",&price);
    scanf("%d",&n);
    arr = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    sum=0;
    for(i=0;i<n;i++){
        if(sum+arr[i]<price){
            sum=sum+arr[i];
        }
        else{
            break;
        }
    }
    printf("%d",i);
}