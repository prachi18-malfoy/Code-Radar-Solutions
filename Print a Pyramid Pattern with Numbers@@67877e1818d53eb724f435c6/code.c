#include <stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);  // Add a space after numbers for proper spacing
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
