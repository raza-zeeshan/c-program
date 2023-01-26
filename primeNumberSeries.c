// print all prime number in given range 
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,limit;
	
	printf("enter the limit : ");
	scanf("%d",&limit);
	
	for(i=1;i<=limit;i++){
		if(i<2){
		return 0;
	}
		else{
			for(n=2;n<sqrt(i);n++){
			
			if(i%n==0){
			return 0;
		}
		
		}
		
	}
	printf("%d ",i);
}
}