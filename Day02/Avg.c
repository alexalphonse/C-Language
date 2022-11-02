#include <stdio.h>
int main() {
    int a, b, c;
    int avg;
    printf("what is the value of A?\n");
    scanf("%d", &a);
    printf("what is the value of B?\n");
    scanf("%d", &b);
    printf("what is the value of C?\n");
    scanf("%d", &c);
    avg = (a + b + c)/3;
    printf("The Average of A, B, C is %d\n", avg);
    return 0;
}