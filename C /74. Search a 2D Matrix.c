bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low = 0;                                            //
    int high = matrixSize * (*matrixColSize) - 1;           // matrix has how many elements?

    while (low <= high) {
        int mid = low + (high - low) / 2;                   // like 1D array binary searching.
        int row = mid / *matrixColSize;                     // with 'row' and 'col' algo, we can 
        int col = mid % *matrixColSize;                     // find the target element [low <-> high].

        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] < target) low = mid + 1;
        else if (matrix[row][col] > target) high = mid - 1; 
    }

    return false;
}
