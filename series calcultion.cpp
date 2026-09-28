//write c programme to print 2+5+8+11+14+... upto n terms and calulate the given series
#include<stdio.h>
int main(){
	int i=2,n,sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(i<=n){
		i+=3;
		sum+=i;	
	}
	printf("\nthe calculation of sum of the series is %d",sum);
	return 0;
}
