#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

#define N 2

int a[] = {1, 2};
int b[] = {2, 3};
int *c;

int add(int a, int b)
{
    return a + b;
}

void i()
{
    c = malloc(N * sizeof(int));
    // c = malloc(sizeof(a) / sizeof(a[0]) * sizeof(int));

    m(add, a, b, c, N);

    printArray(c, N);
}

int main()
{
    i();
    return 0;
}
