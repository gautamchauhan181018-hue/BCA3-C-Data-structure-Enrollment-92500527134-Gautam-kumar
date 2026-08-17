// Write a program to find Minimum and Maximum numbers from the  
//given array using Recursion.

#include <stdio.h>

int min(int a[], int n)
{
    int m;

    if (n == 1)
        return a[0];

    m = min(a, n - 1);

    if (a[n - 1] < m)
        return a[n - 1];
    else
        return m;
}

int max(int a[], int n)
{
    int m;

    if (n == 1)
        return a[0];

    m = max(a, n - 1);

    if (a[n - 1] > m)
        return a[n - 1];
    else
        return m;
}

int main()
{
    int a[100], n, i;
    int minimum, maximum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minimum = min(a, n);
    maximum = max(a, n);

    printf("Minimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);

    return 0;
}