#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

int fake_mn = 3;
int fake_mx = 10;
int really_fake_c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

int isGreater(int a, int min)
{
    return a > min;
}

int isLesser(int a, int max)
{
    return a < max;
}

int inc(int a, int p)
{
    return p + 1;
}

void v()
{
    int n = sizeof(really_fake_c) / sizeof(really_fake_c[0]);

    int *l = malloc(n * sizeof(int));
    int nLesser = fi(isLesser, really_fake_c, l, n, fake_mx);

    int *g = malloc(nLesser * sizeof(int));
    int nGreater = fi(isGreater, l, g, nLesser, fake_mn);

    printf("nGreater = %d\n", nGreater);

    int count = r(inc, g, nGreater, 0);

    printf("count = %d\n", count);
}

int main()
{
    v();
    return 0;
}
