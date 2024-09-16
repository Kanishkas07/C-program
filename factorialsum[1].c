#include <stdio.h>

void main() {
    int n;
    float sum = 0,fact;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        float factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        sum += (double)i / factorial;
    }
    printf("The sum of the series is: %f\n", sum);
}