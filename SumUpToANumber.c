#include <stdio.h>

int sumUpToN(const int N) {
    return (N * (N + 1)) / 2;
}

int main() {
    int N, sum;
    
    printf("Enter a number: ");
    scanf("%d", &N);
    
    sum = sumUpToN(N);
    
    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);
    
    return 0;
}
