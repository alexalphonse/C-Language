#include <stdio.h>
int main() {
    int a, b, c;
    printf("value of A\n");
    scanf("%d", &a);
    printf("Value of B\n");
    scanf("%d", &b);
    printf("Value of C\n");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("A is Greater which is %d\n", a);
    else
        if(b > c)
            printf("B is Greater which is %d\n", b);
        else
            printf("C is Greater which is %d\n", c);
    return 0;
}