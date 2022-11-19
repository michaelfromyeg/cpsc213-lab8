#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

#define N 1

// Pretend evens (from a), odds (from b)
int fake_e[] = {2};
int fake_o[] = {3};

int mn;

int min(int a, int b)
{
    return a < b ? a : b;
}

void iv()
{
    int eMin = r(min, fake_e, N, INT_MAX);
    int oMin = r(min, fake_o, N, INT_MAX);

    mn = min(eMin, oMin);
    printf("mn = %d\n", mn);
}

int main()
{
    iv();
    return 0;
}
