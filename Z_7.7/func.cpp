#include "func.h"

void Show(Node *Tree) {
    if (Tree) {
        Show(Tree->left);
        cout << Tree->num << ' ';
        Show(Tree->right);
    }
}

Node *Search(Node *apple, int num) {
    Node *current = apple;
    Node *after = apple;
    while (current) {
        after = current;
        if (num < current->num) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return after;
}

void FillTree(int num, Node *&Tree) {
    Node *apple = new Node;
    apple->num = num;
    apple->left = nullptr;
    apple->right = nullptr;
    if (!Tree) {
        Tree = apple;
    } else {
        Node *insert;
        insert = Search(Tree, num);
        if (num < insert->num) {
            insert->left = apple;
        } else {
            insert->right = apple;
        }
    }
}

void print_tree_level(Node *top, int level) {
    if (top) {
        print_tree_level(top->left, level + 1);
        //обход левого поддерева
        for (int i = 0; i < level; i++)
            cout << "_____";
        cout << top->num << endl;
        print_tree_level(top->right, level + 1);
        //обход правого поддерева
    }
}

/*рекурсивный обход в глубину и возвращение масимального значения*/
int CountHeight(Node *Tree) {
    if (Tree == nullptr) {//вдруг дерево пустое
        return -1;
    }
    int leftH = CountHeight(Tree->left);
    int rightH = CountHeight(Tree->right);
    return max(leftH, rightH) + 1;
}

void del_tree (Node *&top)
{
    if (top)
    {
        del_tree (top -> left); //обход левого поддерева
        del_tree(top -> right);//обход правого поддерева
        delete top;            // освобождение памяти
        top = nullptr;
    }
}

