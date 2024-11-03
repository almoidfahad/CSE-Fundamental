#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int matrix[N][M];
    int frequency[1001] = {0};  

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            frequency[matrix[i][j]]++; 
        }
    }

    for (int i = 0; i < X; i++) {
        int num;
        scanf("%d", &num);
        printf("%d\n", frequency[num]);  
    }

    return 0;
}
