//4. Write a program to find the factorial of a given integer number using  
//stack. 

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
        printf("Stack Underflow\n");
        return 0;
    }

    return stack[top--];
}

int main()
{
    int n, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }

    
    for (i = 1; i <= n; i++)
    {
        push(i);
    }

    
    while (top != -1)
    {
        factorial = factorial * pop();
    }

    printf("Factorial of %d = %d", n, factorial);

    return 0;
}