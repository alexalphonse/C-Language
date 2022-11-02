#Day02
#Learnt to Add Numbers and execute it.

#C Program 01

#Created a C program which executes a mathematical addition function where a=10 and b=20.

    #include <stdio.h>
    int main() {
        int a,b,c;
        a = 10;
        b = 20;
        c=a+b;
        printf("The value of c is %d\n", c);
        return 0;
    }

#C Program 02

#Created a C program which executes a mathematical addition function Where we can manually add value to A and B.

    #include <stdio.h>
    int main() {
        int a, b, c;
        printf("What is the value of A?\n");
        scanf("%d", &a);
        printf("What is the value of B?\n");
        scanf("%d", &b);
        c=a+b;
        printf("The sum of A & B is %d\n", c);
        return 0;
    }


#C Program 03

#Created a C program which executes a mathematical function which gives the result of A and B in Addittion,Subtraction,Multiplication,Division,Reminder.

    #include <stdio.h>

    int main() {
        int a, b, c, d, e, f, g;
        printf("What is the value of A?\n");
        scanf("%d", &a);
        printf("What is the value of B?\n");
        scanf("%d", &b);
        c=a+b;
        d=a-b;
        e=a*b;
        f=a/b;
        g=a%b;
        printf("The Sum of A & B is %d\n", c);
        printf("The Subtraction of A & B is %d\n", d);
        printf("The Multiple of A & B is %d\n", e);
        printf("The Division of A & B is %d\n", f);
        printf("The Reminder of A & B is %d\n", g);
        return 0;
    } 
