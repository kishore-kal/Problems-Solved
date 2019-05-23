#include<stdio.h>
#include<conio.h>
int main()
{
	int price[3],available[3],cash,max_fruits=0,i,j,total_cost=0,temp;
	for(i=0;i<3;i++){
		scanf("%d",&price[i]);
	}
	for(i=0;i<3;i++)
		scanf("%d",&available[i]);

	scanf("%d",&cash);

	for(i=0;i<2;i++){
		for(j=1;j<3;j++){
			if(price[i]>price[j]){
				temp = price[i];
				price[i]=price[j];
				price[j]=temp;
				temp=available[i];
				available[i]=available[j];
				available[j]=temp;
			}
		}
	}
	
	for(i=0;i<3;){
		for(j=available[i];j>0;j--){
			if(total_cost <= cash){

				if(price[i]*j > cash)
					continue;
				else{
					total_cost = total_cost + (price[i]*j);
					max_fruits = max_fruits + j;
					break;
				}
		
			}
		}
	}
	printf("\nMax fruits bought by john : %d",max_fruits);
	
}