int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    for (size_t i = 0; i < matSize; i++) {
        for (size_t j = 0; j < *matColSize; j++) {
            if (i == j) {
                sum += mat[i][j] + mat[i][*matColSize - j - 1];
            }
        }
    }
    if (matSize % 2 != 0) sum -= mat[matSize / 2][*matColSize / 2]; // if size of matrix is odd, we just need to add the center element once.

    return sum;
}
