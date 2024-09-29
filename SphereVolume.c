#include <stdio.h>
#define PI 3.14159  // Define the value of Pi

float calculateVolume(const float radius) {
    return (4.0/3.0) * PI * radius * radius * radius;
}

int main() {
    float radius, volume;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    
    volume = calculateVolume(radius);
    
    printf("The volume of the sphere is: %g\n", volume);
    
    return 0;
}
