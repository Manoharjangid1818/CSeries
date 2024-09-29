#include <stdio.h>
#define PI 3.14159 // Define the value of PI

float convertToRadians(const float degrees) {
    return (degrees * PI) / 180;
}

int main() {
    float degrees, radians;
    
    printf("Enter the angle in degrees: ");
    scanf("%f", &degrees);
    
    radians = convertToRadians(degrees);
    
    printf("The angle in radians: %g\n", radians);
    
    return 0;
}
