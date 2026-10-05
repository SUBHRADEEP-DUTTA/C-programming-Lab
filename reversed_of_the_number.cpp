//Write a c programme to reverse the digits of a whole number
#include<stdio.h>
int main(){
	int n,digit=0,reversed=0;
	printf("Enter your number : ");
	scanf("%d",&n);
	printf("The reversed version of your number is :");
	if(n<0){
		printf(" - ");
		n=-n;
	}
	while(n>0){
		digit=n%10;
		reversed=(reversed*10)+digit;
		n/=10;
	}
	printf("%d",reversed);
	return 0;
}
