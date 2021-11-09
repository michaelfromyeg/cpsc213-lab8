#include <limits.h> // for INT_MIN
#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

// Necessary helper

int maxf(int i, int j)
{
    return i > j ? i : j;
}

// Store max value of d (should be c) in mx
void ii()
{
    mx = r(maxf, fake_c, N, INT_MIN);
    printf("mx = %d\n", mx);
}

int main()
{
    ii();
    return 0;
}
