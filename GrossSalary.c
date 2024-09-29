#include <stdio.h>

float calculateGrossSalary(const float basicPay) {
    float DA, HRA, PF, grossSalary;

    if (basicPay < 5000) {
        DA = 0.30 * basicPay;
    } else {
        DA = 0.45 * basicPay;
    }
    
    HRA = 0.15 * basicPay;
    PF = 0.12 * basicPay;

    grossSalary = basicPay + DA + HRA - PF;
    return grossSalary;
}

int main() {
    float basicPay, grossSalary;

    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);
    
    grossSalary = calculateGrossSalary(basicPay);
    
    printf("The gross salary of the employee is: %g\n", grossSalary);

    return 0;
}
