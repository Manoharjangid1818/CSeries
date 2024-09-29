#include <stdio.h>
#define PI 3.14159  // Define the value of PI

float calculateVolume(const float radius,const float height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

int main() {
    float radius, height, volume;
    
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cone: ");
    scanf("%f", &height);
    
    volume = calculateVolume(radius, height);
    
    printf("The volume of the cone is: %g\n", volume);
    
    return 0;
}
