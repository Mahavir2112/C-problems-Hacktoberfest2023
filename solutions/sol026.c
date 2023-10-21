#include <stdio.h>

unsigned long long calculateFactorial(int num) {
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0; // Return 0 as an error code
    }

    unsigned long long factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    unsigned long long result = calculateFactorial(number);

    if (result != 0) {
        printf("%d! = %llu\n", number, result);
    }

    return 0;
}
