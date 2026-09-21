//write a C programme to print even numbers to 10
#include<stdio.h>
int main(){
	int a=2;
	while(a<11){
		if(a%2==0){
			printf("Even numbers are %d",a);	
		}
		a++;
	}
	return 0;
}
