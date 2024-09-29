#include <stdio.h>
#define PI 3.14159  // Define the value of Pi

float calculateArea(const float radius) {
    return PI * radius * radius;
}

// You can use Void main() for Turbo C++ editor
int main() {
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = calculateArea(radius);
    
    printf("The area of the circle is: %gn", area);
    
    return 0;
}
