//write a c programme to find the greatest among three inputed numbers
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2st number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("The greatest number is %d",a);
	else if(b>a && b>c)
	printf("The greatest number is %d",b);
	else
	printf("The greatest number is %d",c);
	return 0;
}
