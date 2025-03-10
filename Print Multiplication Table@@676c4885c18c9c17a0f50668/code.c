#include <stdio.h>

int main() {
    int n;
    
    // Reading the input number n
    scanf("%d", &n);
    
    // Looping from 1 to 10 to print the multiplication table
    for(int i = 1; i <= 10; i++) {
        // Printing the multiplication table for the number n
        printf("%d X %d = %d\n",n, i, n * i);
    }
    
    return 0;
}
