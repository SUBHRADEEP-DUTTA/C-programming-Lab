//Write a c programme to print tribonacci series upto n terms
#include<stdio.h>
int main(){
	int i,n;
	long long t1=0,t2=1,t3=1,next_term;
	printf("Enter your terms : ");
	scanf("%d",&n);
	if(n<0){
		printf("Invalid Input.");
	}
	printf("The tribonacci series upto %d : ",n);
	for(i=1;i<=n;i++){
		if(i==1){
			printf(" %lld",t1);
			continue;
		}
		if(i==2){
			printf(" %lld",t2);
			continue;
		}
		if(i==3){
			printf(" %lld",t3);
			continue;
		}
		next_term=t1+t2+t3;
		t1=t2;
		t2=t3;
		t3=next_term;
		printf(" %lld",next_term);
	}
	printf("\n");
	return 0;
}
