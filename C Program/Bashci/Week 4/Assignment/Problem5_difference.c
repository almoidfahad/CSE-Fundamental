#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int *pA = &A; 
    int *pB = &B; 

    int difference = abs(*pA - *pB);
    printf("%d\n", difference);

    return 0;
}
