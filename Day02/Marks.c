#include <stdio.h>
int main() {
    float obtainedmarks, totalmark, percentage;
    printf("How much did you Score?\n");
    scanf("%d", &obtainedmarks);
    printf("What is the Total Marks?\n");
    scanf("%d", &totalmark);
    percentage = obtainedmarks*100.0/totalmark;
    printf("Your Percentage is %f\n", percentage);
    return 0;
}