#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g;
    printf("What is the value of A?\n");
    scanf("%d", &a);
    printf("What is the value of B?\n");
    scanf("%d", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("The Sum of A & B is %d\n", c);
    printf("The Subtraction of A & B is %d\n", d);
    printf("The Multiple of A & B is %d\n", e);
    printf("The Division of A & B is %d\n", f);
    printf("The Reminder of A & B is %d\n", g);
    return 0;
}