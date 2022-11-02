#include <stdio.h>

int main() {
    double rpu, quantity, amount;
    printf("Welcome to the Store\nWe have 10 percent off on purchase above $500\n");
    printf("What is the rate of one unit?\n");
    scanf("%lf", &rpu);
    printf("How many units are you Buying?\n");
    scanf("%lf", &quantity);
    amount = quantity * rpu;
    if (amount > 500)
        amount = amount * 0.9;
    printf("You have to pay $%lf\n", amount);
    return 0;
}