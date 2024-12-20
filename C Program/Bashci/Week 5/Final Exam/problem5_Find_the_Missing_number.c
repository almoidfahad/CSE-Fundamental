#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        unsigned long long M, A, B, C;
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);
        
        unsigned long long product = A * B * C;
       
        if (product == 0) {
            printf("%d\n", M == 0 ? 0 : -1);
        } else if (M % product == 0) {
            printf("%llu\n", M / product);
        } else {
            printf("-1\n");
        }
    }
}
/*
i/p
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15

o/p
5
-1
-1
0

*/