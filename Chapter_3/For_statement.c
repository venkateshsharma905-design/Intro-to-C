#include <stdio.h>

int main() {
    int x, y;
    for (y = 1; 5 * y <= 55; y++) {
        x = 5 * y;
        printf("%d ", x);
    }
    return 0;
}