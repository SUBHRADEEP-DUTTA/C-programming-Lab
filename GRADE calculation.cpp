//write a c programme to take input of marks of a student and display the rades according to the following conditions.
/*the cnditions are:
if marks>=90 grade A
if marks>=75 grade B
if marks>=50 grade C
otherwise the student will consider as failed*/
#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks :");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100)
	printf("Your grade is A");
	else if(marks>=75 && marks<=89)
	printf("Your grade is B");
	else if(marks>=50 && marks<=74)
	printf("Your grade is C");
	else
	printf("You're FAILED!");
	return 0;
}


