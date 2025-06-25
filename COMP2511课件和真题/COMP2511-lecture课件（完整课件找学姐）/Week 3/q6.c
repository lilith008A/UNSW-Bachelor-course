// Program to print the permutation of an array, given the positions of each
// element to be printed

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUMS 3

void printPermutation(char **A, int *P, int n);
void printPermutation2(char **A, int *P, int n);

int main(int argc, char **argv) {
    char **A = malloc(sizeof(char *) * NUMS);
    A[0] = "cat";
    A[1] = "dog";
    A[2] = "mouse";
    int P[NUMS] = {2, 3, 1};
    printPermutation(A, P, NUMS);
    printf("==========\n");
    printPermutation2(A, P, NUMS);
    return 0;
}

// Time Complexity: O(n^2)
// Space            O(1)
void printPermutation(char **A, int *P, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (P[j] == i) {
                printf("%s\n", A[j]);
            }
        }
    }
}

// Time Complexity:  O(n)
// Space Complexity: O(n)
void printPermutation2(char **A, int *P, int n) {
    char **temp = malloc(sizeof(char *) * n);
    // for (int i = 0; i < n; i++) {
    //     temp[i] = malloc(1000);
    // }

    for (int i = 0; i < n; i++) {
        // strcpy(temp[P[i] - 1], A[i]);
        temp[P[i] - 1] = strdup(A[i]);
    }

    for (int i= 0; i < n; i++) {
        printf("%s\n", temp[i]);
    }
}
