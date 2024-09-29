#include <stdio.h>

float calculateArea(const float length,const float breadth) {
    return length * breadth;
}

//You can use Void main() for Turbo C++ editor
int main() {
    float length, breadth, area;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    area = calculateArea(length, breadth);
    

    printf("The area of the rectangle is: %g\n", area);
    
    return 0;
}
