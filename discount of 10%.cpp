/*write a c programme to find the net payble amount after applying a discount.
if the purchase amount is greater than equal to 10000 they will get the discount of 10%
otherwise they get 5% discount*/
#include<stdio.h>
int main(){
	int purchase_amount;
	printf("Enter purchase amount :");
	scanf("%d",&purchase_amount);
	if(purchase_amount>=10000)
	printf("You will be discounted and your amount is %d",purchase_amount-purchase_amount/100*10);
	else
	printf("Your final amount is %d",purchase_amount-purchase_amount/100*5);
	return 0;
}
