//write a c programme which read an integer value and check whether it is positive or not 
//after satisfying the integer value grater than 0. 
//if it is positive then check whether it is odd or even
#include<stdio.h>
int main(){
	int a;
	printf("Enter your number :");
	scanf("%d",&a);
	if(a>0){
		if(a%2==0)
	printf("The number is positive and your number is greater than 0 and also your number is even.");
	else
	printf("The number is positive and your number is greater than 0 but your number is odd.");
}
	else
	printf("The number is negative and your number is less than 0.");
	return 0;
}

