#include <stdio.h>

int main() {
    int n = 5;
    int arr[5]; // Error: variable-length array declared without a constant size
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    printf("%d", arr[3]);
    return 0;
}