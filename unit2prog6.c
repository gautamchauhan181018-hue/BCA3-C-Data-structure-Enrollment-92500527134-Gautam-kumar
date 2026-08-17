//6. Write a program to find GCD of two numbers. 

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        return 0;
    }

    return stack[top--];
}

int main()
{
    int a, b, remainder, gcd;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    push(a);
    push(b);

    
    while (top != -1)
    {
        b = pop();

        if (top != -1)
        {
            a = pop();
        }

        while (b != 0)
        {
            remainder = a % b;
            a = b;
            b = remainder;
        }

        gcd = a;
    }

    printf("GCD = %d", gcd);

    return 0;
}