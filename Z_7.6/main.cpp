#include "func.h"

int main() {
    int amountOfNum = 5;
    /*do {
        cin >> amountOfNum; // если хотите вводить количество чисел
    } while (amountOfNum <= 0);*/
    int num;

    Node *head = nullptr, *end = nullptr;
    for (int i = 0; i < amountOfNum * 2; ++i) {
        //cin >> num; // если хотите вводить числа вручную
        num = rand() % 11;
        //cout << ":" << num; //показывает сгенерированное число
        /* добавление элемента в список */
        Add(head, end, num);
    }
    cout << '\n';
    /* вывод списка на экран */
    OutputReverse(end);
    //OutputDirect(head);
    /* сложение чисел */
    cout << Summary(head, end, amountOfNum);
}