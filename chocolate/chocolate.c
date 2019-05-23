#include<stdio.h>
/*
int total =0;
int wraps =0;
int chocolatesEaten(int money,int price,int wrapReq){
    //int total = 0;
    //int wraps =0;
    int Mitai,SaptaMitai;
    if(wraps<wrapReq) return SaptaMitai;
    SaptaMitai = SaptaMitai + wraps/wrapReq + money/price;
    Mitai = wraps/wrapReq + money/price;
    wraps = wraps + Mitai - Mitai%wrapReq;
    
    money = money%price;
    chocolatesEaten(money,price,wrapReq);
}*
*/
int main(){
    int price,money,wraps=0,chocolates,wrapReq,eaten=0;
    printf("Enter money,price and wrap in that order\n");
    scanf("%d %d %d",&money,&price,&wrapReq);
    //printf("%d",chocolatesEaten(money,price,wrap));
    printf("%d %d",wraps,eaten);
    while(1){
        chocolates = wraps/wrapReq + money/price;
        eaten = eaten + chocolates;
        wraps = chocolates + wraps%wrapReq;
        money = money%price; 
        printf("\n%d %d %d %d",eaten,chocolates,wraps,money);
        if(wraps<wrapReq) break;
    }
    printf("\n%d",eaten);
    return 0;
}