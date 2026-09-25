////Write a C programme to display the odd numbers from 1 to n 

//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("Enter the value of n : ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(i%2!=0){
//			printf("\nThe odd numbers from 1 to %d are %d",n,i);
//		}
//		i+=2;
//	}
//	return 0;
//}


#include <stdio.h>
int main ()
{
   int n,i=1;
   printf("Enter the value of n : ");
    scanf("%d",&n);
  while(i<=n)
{
	printf ("%d\n",i);
	i+=2;
}
return 0;

}

