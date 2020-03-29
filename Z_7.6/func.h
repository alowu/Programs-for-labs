#ifndef LABS_FUNC_H
#define LABS_FUNC_H

#include <iostream>
#include <ctime>
using namespace std;

struct Node { // элемент двусвязного списка
    int data;
    Node *pNext;
    Node *pPrev;
};

void Add(Node *&head, Node *&end, int num); // добавление элемента в двусвязный список
void OutputDirect(Node *head); // вывод с начала
void OutputReverse(Node *end); // вывод с конца
int Summary(Node *head, Node *end, int num); // нахождение суммы

#endif //LABS_FUNC_H
