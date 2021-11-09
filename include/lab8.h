#ifndef __lab8_h__
#define __lab8_h__

// Just a helper
void printArray(int *arr, int n);

// From the question
void m(int (*f)(int, int), int *a, int *b, int *c, int n);
int r(int (*f)(int, int), int *a, int n, int p);
int fi(int (*f)(int, int), int *a, int *b, int n, int p);

#endif
