#include <stdio.h>

int main() {
    int a, b, c;
    printf("What is the value of A?\n");
    scanf("%d", &a);
    printf("What is the value of B?\n");
    scanf("%d", &b);
    c=a+b;
    printf("The sum of A & B is %d\n", c);
    return 0;
}