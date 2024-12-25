#ifndef MYARRAY_H_
#define MYARRAY_H_

#include <stdbool.h>

int *myArray(int*);

void myArrayPrint(int *arr, int *size);

int myArrayInsert(int *arr, int *size, int index, int value);

int myArrayDelete(int *arr, int *size, int index);

int myArrayUpdate(int *arr, int index, int value);

bool myArraySearch(int *arr, int *size, int value);

int comparator(const void* p, const void* q);

int myArraySort(int *arr, int *size);

#endif
