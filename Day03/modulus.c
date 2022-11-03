#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("please type few numbers\n");
    scanf("%d", &n);
    while (n > 0)
    {
        sum+=(n%10);
        n/=10;
    }
    printf("The Modulus is %d\n", sum);
    
    return 0;
}