//write a c code to print :
/*

12345
 1234
  123
   12
    1
    
*/


#include<stdio.h>
int main(){
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}
