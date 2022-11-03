Day02


C Program 01

Learnt to Add Numbers Created a C program which executes a mathematical addition function where a=10 and b=20.

    #include <stdio.h>
    int main() {
        int a,b,c;
        a = 10;
        b = 20;
        c=a+b;
        printf("The value of c is %d\n", c);
        return 0;
    }

C Program 02

Created a C program which executes a mathematical addition function Where we can manually add value to A and B.

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


C Program 03

Created a C program which executes a mathematical function which gives the result of A and B in Addittion,Subtraction,Multiplication,Division,Reminder.

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

C Program 03

Created a C Program which executes the average of 3 values.

    #include <stdio.h>
    int main() {
        int a, b, c;
        int avg;
        printf("what is the value of A?\n");
        scanf("%d", &a);
        printf("what is the value of B?\n");
        scanf("%d", &b);
        printf("what is the value of C?\n");
        scanf("%d", &c);
        avg = (a + b + c)/3;
        printf("The Average of A, B, C is %d\n", avg);
        return 0;
    }

C Program 04

Learnt the Increment and Decrement operator in C language
    
    #include <stdio.h>
    int main() {
        int a, b;
        a = 10;
        b = a++;
        printf("The value of A is %d\nThe value of B is %d\n", a, b);
        return 0;
    }


C Program 05

Learnt If Statement in C language.

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

C Program 06

Learnt Nested statement in C language.


    #include <stdio.h>
    int main() {
        int a, b, c;
        printf("value of A\n");
        scanf("%d", &a);
        printf("Value of B\n");
        scanf("%d", &b);
        printf("Value of C\n");
        scanf("%d", &c);
        if (a > b && a > c)
            printf("A is Greater which is %d\n", a);
        else
            if(b > c)
                printf("B is Greater which is %d\n", b);
            else
                printf("C is Greater which is %d\n", c);
        return 0;
    }

C Program 07

Learnt Simple if statement and created a Discount Program using C language.

    #include <stdio.h>

    int main() {
        double rpu, quantity, amount;
        printf("Welcome to the Store\nWe have 10 percent off on purchase above $500\n");
        printf("What is the rate of one unit?\n");
        scanf("%lf", &rpu);
        printf("How many units are you Buying?\n");
        scanf("%lf", &quantity);
        amount = quantity * rpu;
        if (amount > 500)
            amount = amount * 0.9;
        printf("You have to pay $%lf\n", amount);
        return 0;
    }

C Program 08

Learnt While loop, Dowhile loop and For loop in C language.

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
