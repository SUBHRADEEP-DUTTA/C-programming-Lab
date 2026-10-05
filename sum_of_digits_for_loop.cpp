//Write a c programme to calculate sum of digits using for loop
#include<stdio.h>
int main(){
	int i,n,sum=0,digit=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=n;i>0;i/=10){
		digit=i%10;
		sum+=digit;
	}
	printf("the sum of the digits of your number is %d",sum);
	return 0;
}
