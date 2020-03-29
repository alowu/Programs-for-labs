#include "func.h"

void Output(Node *data) {
    if (data) {
        while (data) {
            cout << data->symbol << ' ';
            data = data->pNext;
        }
        cout << '\n';
    } else {
        cout << "List is empty\n";
    }
}

void Add(Node *&pList, char &symbol) {
    Node *box;
    box = new Node;
    box->symbol = symbol;
    box->pNext = nullptr;
    if (!pList)
        pList = box;
    else {
        box->pNext = pList;
        pList = box;
    }
}

void Fill(Node *&pList, int max) {
    char sym;
    for (int i = 0; i < max; ++i) {
        sym = static_cast<char>(rand() % 26 + 65);
        Add(pList, sym);
    }
    Output(pList);
}

void FindSymbols(Node *&pList_1, Node *&pList_2, Node *&pList_L, const int MAXL1, const int MAXL2) {
    int kIter = 0;
    int globpos = 0;
    while (globpos < MAXL1) {
        Node *tempL1 = pList_1;

        for (int pos = 0; pos < globpos; ++pos) {
            tempL1 = tempL1->pNext;
        }

        Node *tempL2 = pList_2;
        bool duplicate = false;

        for (int i = 0; i < MAXL2; ++i) {
            if (tempL1->symbol == tempL2->symbol) {
                duplicate = true;
                break;
            } else {
                tempL2 = tempL2->pNext;
            }
        }

        if (!duplicate) {
            Node *tempRes = new Node;
            tempRes->symbol = tempL1->symbol;
            tempRes->pNext = nullptr;
            if (!pList_L) {
                pList_L = tempRes;
                ++kIter;
            } else {
                duplicate = false;
                Node *temp = pList_L;
                for (int i = 0; i < kIter; ++i) {
                    if (tempRes->symbol == temp->symbol) {
                        duplicate = true;
                        break;
                    } else {
                        temp = temp->pNext;
                    }
                }
                if (!duplicate) {
                    tempRes->pNext = pList_L;
                    pList_L = tempRes;
                    ++kIter;
                }
            }
        }
        ++globpos;
    }
}
