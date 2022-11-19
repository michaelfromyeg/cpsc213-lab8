#include <limits.h> // for INT_MIN
#include <stdio.h>
#include <stdlib.h>
#include <lab8.h>

#define N 2

// Pretend sums
int fake_c[] = {3, 5};
int mx;

int max(int a, int b)
{
    return a > b ? a : b;
}

void ii()
{
    mx = r(max, fake_c, N, INT_MIN);

    printf("mx = %d\n", mx);
}

int main()
{
    ii();
    return 0;
}
