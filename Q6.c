#include <stdio.h>

float func(int income, float* net_income) {
    float tax = 0;

    if (income <= 20000) {
        tax = 0;
    }
    else if (income <= 50000) {
        tax = (income - 20000) * 0.10;
    }
    else {
        tax = (30000 * 0.10) + ((income - 50000) * 0.20);
    }

    *net_income = income - tax;
    return tax;
}

int main() {
    int income;
    float tax, net_income;

    printf("Enter gross income: ");
    scanf("%d", &income);

    tax = func(income, &net_income);

    printf("\nTax to pay: $%.2f", tax);
    printf("\nNet income after tax: $%.2f\n", net_income);

    return 0;
}