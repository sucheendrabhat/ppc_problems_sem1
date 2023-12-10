#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Input the maximum value
    printf("Enter the maximum value for the series: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series with terms less than or equal to %d:\n", n);

    // Print the first two terms
    printf("%d, %d, ", firstTerm, secondTerm);

    // Generate and print the Fibonacci series
    while ((nextTerm = firstTerm + secondTerm) <= n) {
        printf("%d, ", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}
