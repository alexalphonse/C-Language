#include <stdio.h>

int main() {
    int count = 0;
    int time;
    printf("How many times do you want to print Hello World!!!?\n");
    scanf("%d", &time);
    while (count <= time-1) {
        printf("Hello World!!!\n");
        count+= 1;
    }
    return 0;
}