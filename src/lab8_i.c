#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

// Necessary helper

int add(int i, int j)
{
    return i + j;
}

void i()
{
    // Create the array
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
