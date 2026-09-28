//write c programme to print 2+5+8+11+14+... upto n terms and calulate the given series
#include<stdio.h>
int main(){
    int i, j=2, sum=0, n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("The series is: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", j);
        sum += j;
        
        // Update the next term by adding the constant difference of 3
        j += 3; 
    }

    printf("\nThe sum of the first %d terms is: %d\n", n, sum);

    return 0;
}

