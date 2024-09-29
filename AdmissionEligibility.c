#include <stdio.h>

void checkEligibility(const float maths,const float physics,const float chemistry) {
    float totalMarks = maths + physics + chemistry;
    float mathsPhysicsTotal = maths + physics;

    if ((maths >= 50 && physics >= 45 && chemistry >= 60 && totalMarks >= 170) || mathsPhysicsTotal >= 120) {
        printf("Eligible for admission\n");
    } else {
        printf("Not eligible for admission\n");
    }
}

int main() {
    float maths, physics, chemistry;

    // Accept marks from the user
    printf("Enter marks in Maths: ");
    scanf("%f", &maths);
    printf("Enter marks in Physics: ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);
    
    // Check eligibility
    checkEligibility(maths, physics, chemistry);

    return 0;
}
