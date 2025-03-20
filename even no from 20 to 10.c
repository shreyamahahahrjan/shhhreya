#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 20 to 10:\n");
    for (i = 20; i >= 10; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
