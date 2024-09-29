#include <stdio.h>
#define PI 3.14159  // Define the value of PI

float calculateSurfaceArea(const float radius) {
    return 4 * PI * radius * radius;
}

int main() {
    float radius, surfaceArea;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    surfaceArea = calculateSurfaceArea(radius);
    
    printf("The surface area of the sphere is: %g\n", surfaceArea);
    
    return 0;
}
