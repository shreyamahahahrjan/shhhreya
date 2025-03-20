#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, key;
    int *ptr = &arr[0][0], found = 0;
    printf("enter your search:");
    scanf("%d",&key);
int i;
    for ( i = 0; i < 9; i++) {
        if (*(ptr + i) == key) {
            found = 1;
            break;
        }
    }

    printf(found ? "Element exists in the matrix.\n" : "Element not found.\n");
    return 0;
}
