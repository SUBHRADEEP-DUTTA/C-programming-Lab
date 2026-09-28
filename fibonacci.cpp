//write a c programme o print the fibonacci series upto n terms
#include<stdio.h>
int main(){
	int n,i,a=0,b=1,c;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf(" %d",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
	return 0;
}
