#include "func.h"

int main(){
    srand(time(nullptr));
    int MaxL1 = rand() % 21;
    int MaxL2 = rand() % 21;
    //cin >> MaxL1 >> MaxL2;
// объявление и инициализация всех нужных массивов
    char *arrL1 = new char[MaxL1];
    int *pL1 = new int[MaxL1];
    FillArr(arrL1, MaxL1);
    FillArr(pL1, MaxL1);
   Output(arrL1, pL1);

    char *arrL2 = new char[MaxL2];
    int *pL2 = new int[MaxL2];
    FillArr(arrL2, MaxL2);
    FillArr(pL2, MaxL2);
    Output(arrL2, pL2);

    char *arrRes = new char[MaxL1];
    int *pLRes = new int[MaxL1];
    Nulling(arrRes, MaxL1);
    Nulling(pLRes, MaxL1);
//------------------------------------------------

    Func(arrL1, pL1, arrL2, pL2, arrRes, pLRes, MaxL1, MaxL2);
    cout << "\n------------\n";
    Output(arrRes, pLRes);

// удаление всех массивов
    delete[] arrL1;
    delete[] arrL2;
    delete[] pL1;
    delete[] pL2;
    delete[] arrRes;
    delete[] pLRes;
}