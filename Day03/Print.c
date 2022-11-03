#include <stdio.h>
int main() {
    int print = 1, count;
    printf("Print Till?\n");
    scanf("%d", &count);
    while (print < count +1) {
        printf("%d\n", print);
        print+= 1;
    }
    
    
    return 0;
}