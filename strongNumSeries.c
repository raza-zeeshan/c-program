// Strong number series
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,sum=0,r,limit,fact=1;
	
	printf("enter the limit : ");
	scanf("%d",&limit);
	printf("strong numbers are :");
	for(n=1;n<=limit;n++){
		sum=0;
		while(n>0){
			fact=1;
			r=n%10;
			for(i=r;i>=1;i--){
				fact*=i;
			}
			sum+=fact;
			n/=10;
		}
		
		}
		if(n==sum){
			printf("%d",n);
	}
	
}