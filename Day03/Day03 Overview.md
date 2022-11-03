# Day 03

## C program 01

## Solved a problem where i had to print till the number entered in C language.

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

## C Program 02

## Solved a factorial multiplaction problem in C language.

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

## C Progtam 03

## Solved a modulus operation in C language.

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

## C Program 04

## Created a Nested loop C Program.

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