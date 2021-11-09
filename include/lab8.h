#ifndef __lab8_h__
#define __lab8_h__

// Just a helper
void printArray(int *arr, int n);

// From the question
void m(int (*f)(int, int), int *a, int *b, int *c, int n);
int r(int (*f)(int, int), int *a, int n, int p);
int fi(int (*f)(int, int), int *a, int *b, int n, int p);

#define N 2

int a[] = {1, 2};
int b[] = {2, 3};
int *c;

// Pretend sums
int fake_c[] = {3, 5};

int mx;
int *e;
int *o;
int eSize;
int oSize;

// Pretend evens (from a), odds (from b)
int fake_e[] = {2};
int fake_o[] = {3};

int mn;

// Extra fakes for part v

int fake_mn = 3;
int fake_mx = 10;
int really_fake_c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

#endif
