//write a c programme whether a number is perfect or not
#include <stdio.h>
int main() {
    int num, i = 1, sum = 0;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {
            sum = sum + i; 
        }
        i++; 
    }
    if (sum == num && num != 0) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }
    if (sum == 1) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
        
    }
    return 0;
}

