#include <stdio.h>

float calculateArea(const float base,const float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height, area;

    printf("Enter the base of the right-angled triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the right-angled triangle: ");
    scanf("%f", &height);
    
    area = calculateArea(base, height);
    
    printf("The area of the right-angled triangle is: %g\n", area);
    
    return 0;
}
