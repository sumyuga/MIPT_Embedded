/*
D2 - Найти брата
В программе описано двоичное дерево:
    typedef struct tree {
        datatype key;
        struct tree *left, *right;
        struct tree *parent; //ссылка на родителя
    } tree;
Требуется реализовать функцию, которая по ключу возвращает адрес соседнего элемента - брата.
Если такого ключа нет или у узла нет брата, то необходимо вернуть 0.
Прототип функции: tree * findBrother(tree *root, int key)
Example:
    Input: 10 5 15 3 7 13 18 1 6 14 0 3
Output: 7
*/

tree *find_node(tree *root, int key)
{
    if (root == NULL) return NULL;
    if (root->key == key) return root;

    tree *node = find_node(root->left, key);

    if (node != NULL) return node;
    return find_node(root->right, key);
}

tree *findBrother(tree *root, int key)
{
    tree *node = find_node(root, key);

    if (node == NULL || node->parent == NULL) return NULL;
    if (node->parent->left == node) return node->parent->right;

    return node->parent->left;
}
