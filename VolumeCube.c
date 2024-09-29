#include <stdio.h>

float calculateVolume(const float length,const float breadth,const float height) {
    return length * breadth * height;
}

// You can use Void main() for Turbo C++ editor
int main() {
    float length, breadth, height, volume;
    
    printf("Enter the length of the cube: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the cube: ");
    scanf("%f", &breadth);
    
    printf("Enter the height of the cube: ");
    scanf("%f", &height);
    
    volume = calculateVolume(length, breadth, height);
    
    printf("The volume of the cube is: %g\n", volume);
    
    return 0;
}
