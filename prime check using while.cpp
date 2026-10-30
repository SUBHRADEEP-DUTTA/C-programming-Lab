// WRITE A C PROGRAMME WHETHER A NUMBER IS PRIME OR NOT USING WHILE AND FOR
#include <stdio.h>
int main() {
    int num, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("The number is not a prime number.");
    } else 
        while (i<=num/2) {
            if (num % i == 0) {
                printf("The number is not a prime number.");
                break;      
            }
           i++;
        }
    if (i>num/2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


