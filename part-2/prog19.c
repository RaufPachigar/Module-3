/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
int main()
{

    int numbers[10];
    int i, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    // Accepting 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating the number of even and odd numbers, and their respective sums
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            sumEven += numbers[i];
        } else {
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    // Displaying the results
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", sumEven);
    printf("d. Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
