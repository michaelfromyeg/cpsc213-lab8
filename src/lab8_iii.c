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

int isOddOrEven(int a, int p)
{
    return a % 2 == p;
    // a % 2 == 0 is even
    // a % 2 == 1 is odd
    // p should only be 0 or 1!
}

void iii()
{
    e = malloc(N * sizeof(int));
    o = malloc(N * sizeof(int));

    int n_even = fi(isOddOrEven, a, e, N, 0);
    int n_odd = fi(isOddOrEven, b, o, N, 1);

    printArray(e, n_even);
    printArray(o, n_odd);
}

int main()
{
    iii();
    return 0;
}
