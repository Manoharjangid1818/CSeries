#include <stdio.h>

// Function to calculate HRA as 10% of basic pay
float calculateHRA(const float basicPay) {
    return 0.10 * basicPay;
}

// Function to calculate perks based on the executive's level
float calculatePerks(const int level) {
    switch (level) {
        case 1:
            return 1000 + 500; // Conveyance + Entertainment
        case 2:
            return 750 + 200;
        case 3:
            return 500 + 100;
        case 4:
            return 250 + 0;
        default:
            return 0; 
    }
}

float calculateTax(float grossSalary) {
    if (grossSalary <= 2000) {
        return 0; // No deduction
    } else if (grossSalary > 2000 && grossSalary <= 4000) {
        return 0.03 * grossSalary; // 3% tax
    } else if (grossSalary > 4000 && grossSalary <= 5000) {
        return 0.05 * grossSalary; // 5% tax
    } else {
        return 0.08 * grossSalary; // 8% tax
    }
}

int main() {
    int jobNumber, level;
    float basicPay, HRA, perks, grossSalary, tax, netSalary;

    // Input executive details
    printf("Enter the executive's job number: ");
    scanf("%d", &jobNumber);
    
    printf("Enter the executive's level number (1-4): ");
    scanf("%d", &level);
    
    printf("Enter the basic pay: ");
    scanf("%f", &basicPay);
    
    // Calculate components
    HRA = calculateHRA(basicPay);
    perks = calculatePerks(level);
    grossSalary = basicPay + HRA + perks; // Gross salary calculation
    tax = calculateTax(grossSalary); // Income tax calculation
    netSalary = grossSalary - tax; // Net salary calculation

    // Display results
    printf("Gross Salary: %g\n", grossSalary);
    printf("Income Tax Deducted: %g\n", tax);
    printf("Net Salary: %g\n", netSalary);

    return 0;
}
