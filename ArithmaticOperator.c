#include <stdio.h>

float performOperation(const float num1,const float num2,const char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 0; 
            }
        default:
            printf("Error: Invalid operator.\n");
            return 0;
    }
}

int main() {
    float number1, number2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &op);

    result = performOperation(number1, number2, op);
    if (op == '+' || op == '-' || op == '*' || (op == '/' && number2 != 0)) {
        printf("Result: %g\n", result);
    }

    return 0;
}
