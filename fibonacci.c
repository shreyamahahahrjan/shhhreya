#include <stdio.h>

int main() {
    int n = 6;  // Number of terms to display
    int a = 1, b = 1, next,i;

    printf("%d%d ", a, b);  // Print first two terms

    for (i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}
