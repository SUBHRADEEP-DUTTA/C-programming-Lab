/*WAP in c to take input of marks of a student and display the grades according to the following c the condition are:
if marks >=90, grade a
if marks >=75, grade b
if marks >=50, grade c, else fail*/
#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } 
    else if (marks >= 75) {
        printf("Grade: B\n");
    } 
    else if (marks >= 50) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}

