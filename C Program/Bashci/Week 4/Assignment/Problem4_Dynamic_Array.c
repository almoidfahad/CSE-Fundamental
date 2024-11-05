#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int));
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = num;
    }

    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1){
            printf(" "); 
        } 
    }

    free(arr);

    return 0;
}
