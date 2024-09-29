#include <stdio.h>

float convertToMeters(float km) {
    return km * 1000;  // 1 KM = 1000 meters
}

float convertToFeet(float km) {
    return km * 3280.84;  // 1 KM = 3280.84 feet
}

int main() {
    float distanceKm;

    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distanceKm);

    printf("Distance in meters: %g\n", convertToMeters(distanceKm));

    printf("Distance in feet: %g\n", convertToFeet(distanceKm));

    return 0;
}
