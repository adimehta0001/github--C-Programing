#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of series 1 + 1/2 + ... + 1/%d is: %.4f\n", n, sum);
    printf("Aditya Mehta VIPS BCA Shift-1A")
    return 0;
}