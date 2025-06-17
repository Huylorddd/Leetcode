void rotate(int** matrix, int matrixSize, int* matrixColSize) {

    // Transpose:
    for (int i = 0; i < matrixSize; i++) {
        for (int j = i + 1; j < *matrixColSize; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Reverse row:
    for (int i = 0; i < matrixSize; i++) {
        int left = 0;
        int right = *matrixColSize - 1;
        
        while (left < right) {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
    }
}
