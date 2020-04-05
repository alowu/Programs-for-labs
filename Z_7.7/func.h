#ifndef LABS_FUNC_H
#define LABS_FUNC_H

#include <iostream>
#include <ctime>
/*      // раскоментить если не работает max в func.cpp
#include<algorithm>  */

using namespace std;

struct Node {
    int num;
    Node *left;
    Node *right;
};

void Show(Node *Tree); //вывод в строчку
void FillTree(int num, Node *&Tree); // заполнение
Node *Search(Node *apple, int num); // поиск места для вставки эл-та
void print_tree_level(Node * top, int level); // вывод по уровням
int CountHeight(Node *Tree);// нахождение максимальной высоты дерева
void del_tree (Node *&top); //удаление дерева

#endif //LABS_FUNC_H
