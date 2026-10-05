//Write a c programme to count the digits of a whole number
#include<stdio.h>
int main(){
	long long n;
	int count=0,digit=0;
	printf("\nEnter your number:");
	scanf("%lld",&n);
	if(n==0){
		count=1;
	}
	while(n>0){
		digit=n%10;
		n/=10;
		count++;
	}
	printf("Count of the digits of your number is %d",count);
	return 0;
}
