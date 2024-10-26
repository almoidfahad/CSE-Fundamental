#include <stdio.h>

int main() {
    int n, x, y;
    int count = 0;

    scanf("%d %d %d", &n, &x, &y);

    for (int i = 0; i < n; i++) {
        int price;
        scanf("%d", &price);

        if (price >= x && price <= y) {
            count++;
        }
    }
    printf("%d\n", count);
}