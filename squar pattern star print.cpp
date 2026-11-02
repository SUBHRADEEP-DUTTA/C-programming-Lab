 //write a c programme to print a star pattern in square format
 #include<stdio.h>
 int main(){
 	int i,j,n;
 	printf("Enter th value of n : ");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		for(j=1;j<=n;j++){
 			printf("*");
		 }
		 printf("\n");
	 }
	 
	 return 0;
 }
