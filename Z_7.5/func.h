#ifndef LABS_FUNC_H
#define LABS_FUNC_H

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void Nulling(T *arr, int max){
    for (int i = 0; i < max; ++i) {
        arr[i] = 0;
    }
}

void FillArr(char *arr, int max);
void FillArr(int *arr, int max);
void Output(char *arr, int *p);
void Func(char *&List1, int *p1, char *&List2, int *p2, char *&res, int *pres, const int max1, const int max2);


#endif //LABS_FUNC_H
