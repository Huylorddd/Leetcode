/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    if (numRows == 0) return 0;                                           // EDGE CASE - FOR MEMORY EFFICIENCY: return 0 instead of NULL since '0' = 4 bits | 'NULL' = 8 bits.
    *returnSize = numRows;                                                // return size of rows (or inner arrays) for an entire main array.
                                                                          //                                                                                                         v
    int **result = (int**)malloc(numRows * sizeof(int*));                 // allocate room for the entire triange (for example: the triangle has 1,2,3,6 or 9,... etc.. rows). fe: [[x],[x],[x],[x]]
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));             // allocate room for each row. fe: [[a],[b,c],[d,e,f]] ,..
                                                                          //                                   ^   ^       ^
    for (int i = 0; i < numRows; i++) {                                   // how many interations based on how many rows.
        result[i] = (int*)malloc((i+1) * sizeof(int));                    // 'i' row has 'i+1' elements. (since FIRST ROW is start from 0).
        (*returnColumnSizes)[i] = i + 1;                                  // set the column size (or size of elements) for rows (rows[0] -> 1 room, rows[3] -> 4 rooms for example) .
                                                                            //          "since it's a triangle so the rooms of each row increase 1 for every rows".

        result[i][0] = result[i][i] = 1;                                  // set the first and the last elements in the inner array equals to 1.
        for (int j = 1; j < i; j++) {                                     // loop of every elements except the first and the last one inside the inner array.
            result[i][j] = result[i-1][j-1] + result[i-1][j];             // algorithm for each row.
        }
    }
    return result;
}

// P/S: If we see the 'double cursor' of a function -> consider it's a 2D Array.
