#include <stdio.h>

int main()
{
  char operator;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

   printf("Enter two numbers: ");
  scanf("%lf %lf", &a, &b);

    switch(operator) {  
        case '+':
            printf("Result = %.2lf", a + b);
            break;

        case '-':
            printf("Result = %.2lf", a - b);
            break;

        case '*':
            printf("Result = %.2lf", a * b);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid operator");
    }
}
