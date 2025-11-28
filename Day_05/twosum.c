#include <stdio.h>

void two_sum(int arr[], int size, int target) {
    int i;
    int j;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }
}
