#include <stdio.h>
int main() {
    int x = 1, n, factor = 1;
    printf("Till which number you wanna Multiply?\n");
    scanf("%d", &n);
    while (x <= n) {
        factor *= x;
        x+=1; 

    }
    printf("The factorial value of %d is %d\n",n, factor);
    return 0;
}