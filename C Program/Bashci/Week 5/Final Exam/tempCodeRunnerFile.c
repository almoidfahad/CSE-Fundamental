  for (int j = 0; j < m; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }