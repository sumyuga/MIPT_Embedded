/*
D0 - Отсортировать слова
Дана строка, состоящая из английских букв и пробелов. В конце строки символ точка.
Все слова разделены одним пробелом. Необходимо составить из слов односвязный список
и упорядочить по алфавиту. Список необходимо удалить в конце программы.
Для сравнение строк можно использовать strcmp. Необходимо использовать данную
структуры организации списка.
    struct list {
        char word[20];
        struct list *next;
    }
Необходимо реализовать односвязный список и обслуживающие его функции.
    add_to_list
    swap_elements
    print_list
    delete_list
Example:
Input: efg abcd zzz.
Output: abcd efg zzz
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    char word[20];
    struct list *next;
};

struct list *add_to_list(struct list *head, char word[])
{
    struct list *new = malloc(sizeof(struct list));

    if (new == NULL) {
        return head;
    }

    strcpy(new->word, word);
    new->next = NULL;

    if (head == NULL) {
        return new;
    }

    struct list *current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new;
    return head;
}

void swap_elements(struct list *first, struct list *second)
{
    char word[20];

    strcpy(word, first->word);
    strcpy(first->word, second->word);
    strcpy(second->word, word);
}

void print_list(struct list *head)
{
    while (head != NULL) {
        printf("%s", head->word);

        if (head->next != NULL) {
            printf(" ");
        }

        head = head->next;
    }

    printf("\n");
}

void delete_list(struct list *head)
{
    while (head != NULL) {
        struct list *next = head->next;

        free(head);
        head = next;
    }
}

int main(void)
{
    struct list *head = NULL;
    char word[20];

    while (scanf("%19s", word) == 1) {
        int last = strlen(word) - 1;
        int is_last = word[last] == '.';

        if (is_last) {
            word[last] = '\0';
        }

        head = add_to_list(head, word);

        if (is_last) {
            break;
        }
    }

    int changed = 1;

    while (changed) {
        struct list *current = head;

        changed = 0;

        while (current->next != NULL) {
            if (strcmp(current->word, current->next->word) > 0) {
                swap_elements(current, current->next);
                changed = 1;
            }

            current = current->next;
        }
    }

    print_list(head);
    delete_list(head);
    return 0;
}
