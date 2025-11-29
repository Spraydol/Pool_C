#include <stdio.h>
#include <string.h>

#define HISTORY_SIZE 5

void display_history(double history[], int count) {
    printf("\nLast 5 Calculations:\n");
    if (count == 0) {
        printf("No history yet.\n");
        return;
    }
    int start = (count > HISTORY_SIZE) ? count - HISTORY_SIZE : 0;
    for (int i = start; i < count; i++) {
        printf("%d: %.2lf\n", i + 1, history[i % HISTORY_SIZE]);
    }
    printf("\n");
}