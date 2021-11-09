#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

void m(int (*f)(int, int), int *a, int *b, int *c, int n) {
  for (int i = 0; i < n; i++)
    c[i] = f(a[i], b[i]);
}

int r(int (*f)(int, int), int *a, int n, int p) {
  for (int i = 0; i < n; i++)
    p = f(a[i], p);
  return p;
}

int fi(int (*f)(int, int), int *a, int *b, int n, int p) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (f(a[i], p)) {
      b[j++] = a[i];
    }
  }
  return j;
}

#define N 8

int a[] = {1, 4, 9, 16, 25, 36, 49, 64};
int b[] = {1, 1, 2,  3,  5,  8, 13, 21};
int* c;
int mx;
int* e; // even elements in a
int* o; // odd elements in b
int eSize;
int oSize;
int mn;

int add(int i, int j) {
    return i + j;
}

void i() {
    c = malloc(N * sizeof(int));
    m(add, a, b, c, N);

    printf("printing c\n");
    printArray(c, N);
}

int maxf(int i, int j) {
    return i > j ? i : j;
}

// max value of C; store in mx
void ii() {
    mx = r(maxf, c, N, INT_MIN);
    printf("mx = %d\n", mx);
}

int isEven(int i, int p) {
    return i % 2 == 0;
}

int isOdd(int i, int p) {
    // return !isEven(i, p);
    return i % 2 != 0;
}

// store even elements of a in e
// store odd elements of b in o
void iii() {
    e = malloc(N * sizeof(int));
    eSize = fi(isEven, a, e, N, 0);

    o = malloc(N * sizeof(int));
    oSize = fi(isOdd, b, o, N, 0);

    // O(1)?
    e = realloc(e, eSize * sizeof(int));
    o = realloc(o, oSize * sizeof(int));

    printf("printing e\n");
    printArray(e, eSize);
    printf("printing o\n");
    printArray(o, oSize);
}

int minf(int i, int j) {
    return i < j ? i : j;
}

// find min of lists e and o
void iv() {
    int eMin = r(minf, e, eSize, INT_MAX);
    int oMin = r(minf, o, oSize, INT_MAX);

    printf("mn = %d\n", eMin < oMin ? eMin : oMin);
}

int isGreater(int i, int j) {
    return i > j;
}

// number of elements in C between mx and mn
// mx is the max value in C
void v() {
    // int numberOfElementsLessThanMxInC = N - 1;
    int numGreaterThanMnInC = fi(isGreater, c, c, N, mn);

    printf("numElementsBetweenMnMxInC = %d\n", numGreaterThanMnInC - 1);
}

int main() {
    i();
    ii();
    iii();
    iv();
    v();
}

