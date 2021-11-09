#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void m(int (*f)(int, int), int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
        c[i] = f(a[i], b[i]);
}

int r(int (*f)(int, int), int *a, int n, int p)
{
    for (int i = 0; i < n; i++)
        p = f(a[i], p);
    return p;
}

int fi(int (*f)(int, int), int *a, int *b, int n, int p)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (f(a[i], p))
        {
            b[j++] = a[i];
        }
    }
    return j;
}
