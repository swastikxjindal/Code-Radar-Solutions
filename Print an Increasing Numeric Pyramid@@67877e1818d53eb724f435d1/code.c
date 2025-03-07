#include <stdio.h>

int main() {
    int n = 6; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}