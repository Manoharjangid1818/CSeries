#include <stdio.h>

float calculateBill(const int units) {
    float billAmount = 0.0;

    if (units <= 50) {
        billAmount = units * 2.30; // Rate for the first 50 units
    } else if (units <= 100) {
        billAmount = (50 * 2.30) + ((units - 50) * 2.60); // First 50 units + next 50 units
    } else if (units <= 250) {
        billAmount = (50 * 2.30) + (50 * 2.60) + ((units - 100) * 3.25); // First 100 units + next 150 units
    } else {
        billAmount = (50 * 2.30) + (50 * 2.60) + (150 * 3.25) + ((units - 250) * 4.35); // First 250 units + more than 300 units
    }

    return billAmount;
}

int main() {
    int units;
    float billAmount;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    billAmount = calculateBill(units);

    printf("The total bill amount is: Rs %g\n", billAmount);

    return 0;
}
