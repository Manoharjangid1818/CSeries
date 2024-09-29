#include <stdio.h>
#include <math.h> // Include math.h for pow function

float calculateCompoundInterest(const float principal,const float rate, int time) {
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    float principal, rate, compoundInterest;
    int time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    compoundInterest = calculateCompoundInterest(principal, rate, time);

    printf("The compound interest is: %g\n", compoundInterest);

    return 0;
}
