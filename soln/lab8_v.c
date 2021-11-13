#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

int fake_mn = 3;
int fake_mx = 10;
int really_fake_c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

int isGreater(int i, int j)
{
    return i > j;
}

int isLesser(int i, int j)
{
    return i < j;
}

int inc(int i, int j)
{
    return j + 1;
}

// number of elements in C between mx and mn
// mx is the max value in C
void v()
{
    // fake_c, mn and mx yield nothing, so we'll use something better!
    int really_fake_N = sizeof(really_fake_c) / sizeof(really_fake_c[0]);

    int *g = malloc(really_fake_N * sizeof(int));
    int nGreater = fi(isGreater, really_fake_c, g, really_fake_N, fake_mn);

    int *l = malloc(nGreater * sizeof(int));
    int nLesser = fi(isLesser, g, l, nGreater, fake_mx);

    printf("printing g\n");
    printArray(g, nGreater);

    printf("printing l\n");
    printArray(l, nLesser);

    int count = r(inc, l, nLesser, 0);
    printf("count = %d\n", count);
}

int main()
{
    v();
    return 0;
}
