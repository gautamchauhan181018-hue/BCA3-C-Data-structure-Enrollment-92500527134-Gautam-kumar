//5. Write a program to find the power of a given number using stack.


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
    int base, power;
    int result = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    if (power < 0)
    {
        printf("Please enter a non-negative power.");
        return 0;
    }


    for (i = 1; i <= power; i++)
    {
        push(base);
    }

    
    while (top != -1)
    {
        result = result * pop();
    }

    printf("%d^%d = %d", base, power, result);

    return 0;
}