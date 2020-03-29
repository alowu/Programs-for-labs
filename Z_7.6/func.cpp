#include "func.h"

void Add(Node *&head, Node *&end, int num) {
    Node *elem;
    elem = new Node;
    elem->data = num;
    elem->pNext = nullptr;
    elem->pPrev = nullptr;

    if (!head){
        head = elem;
        end = elem;
    } else {
        elem->pNext = head;
        head->pPrev = elem;
        head = elem;
    }
}

void OutputDirect(Node *head) {
    while (head){
        cout << head->data << " ";
        head = head->pNext;
    }
    cout << '\n';
}

void OutputReverse(Node *end) {
    while (end){
        cout << end->data << " ";
        end = end->pPrev;
    }
    cout << '\n';
}

int Summary(Node *head, Node *end, int num) {
    int count = 0;
    int sum = 0;

    do{
        ++count;
        sum += head->data * end->data;
        head = head->pNext;
        end = end->pPrev;
    }while (count != num);

    return sum;
}
