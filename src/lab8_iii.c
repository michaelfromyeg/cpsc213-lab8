#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

#define N 2
int a[] = {1, 2};
int b[] = {2, 3};

int *e;
int *o;
int eSize;
int oSize;

int isEven(int i, int p)
{
    return i % 2 == 0;
}

int isOdd(int i, int p)
{
    // return !isEven(i, p);
    return i % 2 != 0;
}

// store even elements of a in e
// store odd elements of b in o
void iii()
{
    e = malloc(N * sizeof(int));
    eSize = fi(isEven, a, e, N, 0);

    o = malloc(N * sizeof(int));
    oSize = fi(isOdd, b, o, N, 0);

    printf("printing e\n");
    printArray(e, eSize);
    printf("printing o\n");
    printArray(o, oSize);

    free(e);
    free(o);
}

int main()
{
    iii();
}
