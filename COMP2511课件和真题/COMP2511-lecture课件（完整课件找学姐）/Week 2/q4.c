// Recursive function to delete the first instance of a given value
// from a linked list, if it exists

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

// Recursive Solution
struct node *listDelete(struct node *l, int value) {

    // base case
    if (l == NULL) {
        return NULL;
    }

    struct node *restOfList = l->next;
    // recursive case
    if (l->data == value) {
        free(l);
        return restOfList;
    }
    // talk about doing `return listDelete(restOfList, value);` instead of below two lines
    l->next = listDelete(restOfList, value);
    return l;
}
