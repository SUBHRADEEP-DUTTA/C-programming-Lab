/*write a c programme to find the sum of the following series 1!+3!+5! and upto n!*/
#include<stdio.h>
int main(){
	int i=1,n,j,sum=0,f;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(i<=n){  //outer loop
		j=1;
		f=1;
		while(j<=i){   //inner loop
			f=f*j;
			j++;
		}
		sum=sum+f;
		j++;
		i=i+2;
	}
	printf("the sum is %d",sum);
	return 0;
}
