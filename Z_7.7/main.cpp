#include "func.h"

int main() {
    srand(time(nullptr));
    Node *Tree = nullptr;
    int n;
    do {
        cout << "Enter the number of tree items ";
        cin >> n;
    } while (n <= 0);
    int x;
    for (int i = 0; i < n; ++i) {
        x = rand() % 100;
        FillTree(x, Tree); //заполнение дерева
    }
    Show(Tree); // вывод в строчку
    cout << "\n------ Output by levels ------\n";
    print_tree_level(Tree, 0);//вывод по уровням
    cout << "\n----- Max height is -----\n";
    cout << CountHeight(Tree);
    del_tree(Tree);
    cout << "\n----- Verify that the tree has been deleted -----" <<
         "\n-- If the memory is cleared, it will output -1 --\n";
    cout << CountHeight(Tree) << endl;
    system("pause");
}
