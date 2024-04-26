#include <stdio.h>

int main() {
    int i,n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Series: ");
    for ( i = 1; i <= n; ++i) {
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        }
        sum += i;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
