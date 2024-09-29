#include <stdio.h>

float calculateWeeklyPay(const float hourlyRate, const float hoursWorked) {
    return hourlyRate * hoursWorked;
}

int main() {
    float hourlyRate, hoursWorked, weeklyPay;
    
    printf("Enter the hourly pay rate: ");
    scanf("%f", &hourlyRate);
    
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    weeklyPay = calculateWeeklyPay(hourlyRate, hoursWorked);
    
    printf("The weekly pay is: %g\n", weeklyPay);
    
    return 0;
}
