//write a c programme to calculate electricity bill based on the number of units consume
//the charges are -
/* 0-100 > rs. 2 per unit
101-200 > rs. 3 per unit
201-300 > rs. 5 per unit
above 300 units > rs. 7 per unit*/

#include <stdio.h>
int main(){
	int bill_1,bill_2,bill_3,bill_4,charge,unit;
	printf("Enter your unit :");
	scanf("%d",&unit);
	if(unit>=0 && unit<=100){
		charge=2;
		bill_1=charge*unit;
		printf("Your total electricity bill is %d",bill_1);
	}
	else if(unit>=101 && unit<=200){
	charge=3;
	bill_2=charge*unit;
	printf("Your total electricity bill is %d",bill_1+bill_2);
    }
    else if(unit>=201 && unit<=300){
    	charge=5;
    	bill_3=charge*unit;
    	printf("Your total electricity bill is %d",bill_1+bill_2+bill_3);
	}  
	else{
		charge=7;
		bill_4=charge*unit;
		printf("Your total electricity bill %d",bill_1+bill_2+bill_3+bill_4);
	}
	return 0;
	
}

