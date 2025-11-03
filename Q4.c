#include <stdio.h>
float shipping() {
    float total = 0;
    int shipping = 0;
    int order;
    float weight;
    printf("Enter order amount: ");
    scanf("%d", &order);
    printf("Enter weight: ");
    scanf("%f", &weight);

    if (order > 100) {
        printf("Free shipping");
    }if (order <= 100) {
        if (weight < 2) {
            shipping = 10;
        }else if (weight >=2 && weight <= 5) {
            shipping = 15;
        }else if (weight > 5) {
           shipping = 20;
        }
    }
    return total= order + shipping;
}

int main() {
 int total_cost = 0;
    total_cost = shipping();
    printf("Total cost = %d", total_cost);
    return 0;
}