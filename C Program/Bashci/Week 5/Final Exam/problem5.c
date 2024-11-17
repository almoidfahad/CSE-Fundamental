#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        unsigned long long M, A, B, C;
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);
        
        unsigned long long product = A * B * C;

        // Check if we can find X
        if (product == 0) {
            // Special case: If product is 0 and M is also 0, X could be 0
            printf("%d\n", M == 0 ? 0 : -1);
        } else if (M % product == 0) {
            printf("%llu\n", M / product);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
