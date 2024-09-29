#include <stdio.h>

void classifyTriangle(const float side1,const float side2,const float side3) {
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid sides: All sides must be positive.\n");
    } else if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
}

int main() {
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    classifyTriangle(side1, side2, side3);

    return 0;
}
