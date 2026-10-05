//Write a c programme to calculate sum of digits using while loop
#include<stdio.h>
int main(){
	int i,n,sum=0,digit=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(n>0){
		digit=n%10;
		sum+=digit;
		n/=10;
	}
	printf("the sum of the digits of your number is %d",sum);
	return 0;
}
