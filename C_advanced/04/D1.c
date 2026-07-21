/*
D1 - Вид сверху
В программе описана структура для хранения двоичного дерева:
    typedef struct tree {
        datatype key;
        struct tree *left, *right;
    } tree;
Необходимо реализовать функцию, которая печатает вид дерева сверху.
Функция должна строго соответствовать прототипу: void btUpView(tree *root)
Example:
    Input: 10 5 15 3 7 13 18 1 6 14 0
Output: 1 3 5 10 15 18
*/


int height_tree(tree *root)
{
    if (root == NULL) return 0;

    int left_height = height_tree(root->left);
    int right_height = height_tree(root->right);

    if (left_height > right_height) return left_height + 1;
    return right_height + 1;
}

void find_positions(tree *root, int position, int *min, int *max)
{
    if (root == NULL) return;

    if (position < *min) *min = position;
    if (position > *max) *max = position;

    find_positions(root->left, position - 1, min, max);
    find_positions(root->right, position + 1, min, max);
}

tree *find_top(tree *root, int level, int position, int need_position)
{
    if (root == NULL) return NULL;
    if (level == 0) return position == need_position ? root : NULL;

    tree *top = find_top(root->left, level - 1, position - 1, need_position);

    if (top != NULL) return top;
    return find_top(root->right, level - 1, position + 1, need_position);
}

void btUpView(tree *root)
{
    if (root == NULL) return;

    int min_position = 0;
    int max_position = 0;
    int first = 1;
    int height = height_tree(root);

    find_positions(root, 0, &min_position, &max_position);

    for (int position = min_position; position <= max_position; position++) {
        for (int level = 0; level < height; level++) {
            tree *top = find_top(root, level, 0, position);

            if (top != NULL) {
                if (!first) printf(" ");

                printf("%d", top->key);
                first = 0;
                break;
            }
        }
    }

    printf("\n");
}
