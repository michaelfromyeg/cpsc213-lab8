#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

// Pretend evens (from a), odds (from b)
int fake_e[] = {2};
int fake_o[] = {3};

int mn;

int minf(int i, int j)
{
    return i < j ? i : j;
}

// find min of lists e and o
void iv()
{
    int eMin = r(minf, fake_e, sizeof(fake_e) / sizeof(fake_e[0]), INT_MAX);
    int oMin = r(minf, fake_o, sizeof(fake_o) / sizeof(fake_o[0]), INT_MAX);

    printf("mn = %d\n", minf(eMin, oMin));
}

int main()
{
    iv();
    return 0;
}
