#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

#define N 2

int a[] = {1, 2};
int b[] = {2, 3};
int *c;

int add(int i, int j)
{
    return i + j;
}

void i()
{
    c = malloc(N * sizeof(int));

    // Run "m" (map) with add
    m(add, a, b, c, N);

    printf("printing c\n");
    printArray(c, N);

    free(c);
}

int main()
{
    i();
    return 0;
}
