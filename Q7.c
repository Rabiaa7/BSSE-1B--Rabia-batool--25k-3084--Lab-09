#include <stdio.h>

float calculateRentalCost(int days, float kilometers) {
    float baseRate = 40.0;
    float totalCost = days * baseRate;
    float allowedKm = days * 100.0;

    if (kilometers > allowedKm) {
        float extraKm = kilometers - allowedKm;
        totalCost += extraKm * 0.25;
    }

    if (days >= 7) {
        totalCost *= 0.9;
    }

    return totalCost;
}

int main() {
    int days;
    float kilometers;

    printf("Enter number of rental days: ");
    scanf("%d", &days);
    printf("Enter total kilometers driven: ");
    scanf("%f", &kilometers);

    float cost = calculateRentalCost(days, kilometers);
    printf("Final rental cost: $%.2f\n", cost);

    return 0;
}
