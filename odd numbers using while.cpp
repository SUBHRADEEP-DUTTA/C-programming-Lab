//write a c programme to print odd numbers 1 to 10
#include<stdio.h>
int main(){
	int a=1;
	while(a<11){
		if(a%2!=0){
			printf("\nEven numbers are %d",a);	
		}
		a++;
	}
	return 0;
}
