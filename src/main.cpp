// Copyright 2022 NNTU-CS
#include <iostream>
#include "alg.h"

int main() {
    int size = 65536;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i;
    int count = cbinsearch(arr, size, 1024);
    delete arr;
    std:: cout<< count;
    return 0;
}
