// Recursive function to delete all even numbers from a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

// Recursive Solution
struct node *listDeleteEvens(struct node *l) {

    // base case
	if (l == NULL) {
		return NULL;
	}

    struct node *restOfList = l->next;
    // recursive case
    if (l->data % 2 == 0) {
		free(l);
		return listDeleteEvens(restOfList);
	}
    l->next = listDeleteEvens(restOfList);
    return l;
}
