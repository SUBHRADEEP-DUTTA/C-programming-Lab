//write a c programme to calculate the series 1+2+4+7+11+...upto n terms
#include<stdio.h>
int main(){
	int i,n,sum=0,j=1;
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf(" %d",j);
		sum+=j;
		j+=i;
	}	
		printf("\nthe calculation of the terms the series is %d",sum);
		return 0;
}
      
