#include <stdio.h>

float celsiusToFahrenheit(const float celsius) {
    return (celsius * 9/5) + 32;
}

// You can use Void main() for Turbo C++ editor
int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = celsiusToFahrenheit(celsius);
    
    printf("Temperature in Fahrenheit: %g\n", fahrenheit);
    
    return 0;
}
