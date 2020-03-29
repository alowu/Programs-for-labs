#include "func.h"

int main(){
    srand(time(nullptr));
    int MaxL1 = 10;
    int MaxL2 = 10;
    //cin >> MaxL1 >> MaxL2;

    Node *pList1 = nullptr;
    Fill(pList1, MaxL1);

    Node *pList2 = nullptr;
    Fill(pList2, MaxL2);

    Node *res = nullptr;
    FindSymbols(pList1, pList2, res, MaxL1, MaxL2);
    cout << "----------------------\n";
    Output(res);

}