Day 03

C program 01

Solved a problem where i had to print till the number entered in C language.

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

C Program 02

Solved a factorial multiplaction problem in C language.

    #include <stdio.h>
    int main() {
        int x = 1, n, factor = 1;
        printf("Till which number you wanna Multiply?\n");
        scanf("%d", &n);
        while (x <= n) {
            factor *= x;
            x+=1; 

        }
        printf("The factorial value is %d\n", factor);
        return 0;
    }