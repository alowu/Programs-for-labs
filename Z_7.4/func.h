#ifndef labs_FUNC_H
#define labs_FUNC_H

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

struct Node { //элемент списка
    char symbol;
    Node *pNext;
};

void Output(Node *data); // вывод списка
void Add(Node *&pList, char &symbol); // добавление элемента в список
void Fill(Node *&pList, int max); // заполнение списка
void FindSymbols(Node *&pList_1, Node *&pList_2, Node *&pList_L, const int MAXL1, const int MAXL2); // формирование нового списка


#endif //labs_FUNC_H
