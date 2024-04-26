//4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main()
{
    char operator;
    float n1, n2, result;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) 
	{
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
        
                result = num1 % num2;
                printf("Result: %.2lf\n", result);
                break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
