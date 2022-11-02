#include <stdio.h>
int main() {
    int a, b;
    printf("value of A\n");
    scanf("%d", &a);
    printf("Value of B\n");
    scanf("%d", &b);
    if (a > b)
        printf("A is Greater which is %d\n", a);
    else
        printf("B is Greater which is %d\n", b);
    
    return 0;
}