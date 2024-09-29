#include <stdio.h>

void checkNumber(const float number) {
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);
    
    checkNumber(number);

    return 0;
}
