#include <stdio.h>

float calculateInterest(const float principal,const float rate,const float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    interest = calculateInterest(principal, rate, time);
    
    printf("The simple interest is: %g\n", interest);
    
    return 0;
}
