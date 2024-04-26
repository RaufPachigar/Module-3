//WAP to find factorial using recursion
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    int fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number is undefined.\n");
    }
    else {
        fact = factorial(num);
        printf("Factorial of %d = %d\n", num, fact);
    }

    return 0;
}
