#include <stdio.h>

int findMax(const int num1,const  int num2) {
    if (num1 > num2) {
        return num1; // num1 is greater
    } else {
        return num2; // num2 is greater or equal
    }
}

int main() {
    int number1, number2, max;

    printf("Enter the first number: ");
    scanf("%d", &number1);
    
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    max = findMax(number1, number2);
    
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
