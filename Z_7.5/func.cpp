#include "func.h"

void FillArr(char *arr, int max) {
    for (int i = 0; i < max; ++i) {
        arr[i] = static_cast<char>(rand() % 26 + 65);
    }
}

void FillArr(int *arr, int max) {
    for (int i = 0; i < max; ++i) {
        arr[i] = i + 1;
    }
    arr[max - 1] = 0;
}

void
Func(char *&List1, int *p1, char *&List2, int *p2, char *&res, int *pres, const int max1, const int max2) {
    int pos1 = 0,
        count = 0,
        temp = 0;
    int kiter = 0;
    while (kiter < max1) {
        char temp1 = List1[pos1];
        int pos2 = 0;
        bool duplicate = false;
        for (int i = 0; i < max2; ++i) {
            char temp2 = List2[pos2];
            if (temp1 == temp2) {
                duplicate = true;
                break;
            } else {
                pos2 = p2[pos2];
                if (!pos2) break;
            }
        }
        int pos = 0;

        if (!duplicate) {
            if (!res[pos]) {
                res[pos] = temp1;
                ++count;
            } else {
                duplicate = false;
                for (int i = 0; i < count; ++i) {
                    if (res[i] == temp1) {
                        duplicate = true;
                        ++temp;
                        break;
                    }
                }
                if (!duplicate) {
                    pos = count;
                    pres[pos - 1] = count;
                    res[count] = temp1;
                    ++count;
                }
            }
        }
        ++kiter;
        pos1 = p1[pos1];
    }
}

void Output(char *arr, int *p) {
    int pos = 0;
    while (p[pos] != 0) {
        cout << arr[pos] << " ";
        pos = p[pos];
    }
    cout << arr[pos];
    cout << endl;
}
