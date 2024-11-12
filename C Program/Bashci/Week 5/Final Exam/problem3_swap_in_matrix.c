#include <stdio.h>

void printMatrix(int matrix[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][m - 1];
        matrix[i][m - 1] = temp;
    }
    
    for (int j = 0; j < m; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }

    printMatrix(matrix, n, m);

}
