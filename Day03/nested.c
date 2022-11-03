#include <stdio.h>
int main() {
    int row, col, n;
    printf("Enter value\n");
    scanf("%d", &n);
    for(row = 1;row <=n; row+=1) {
        for(col = 1; col <= row; col +=1) {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}