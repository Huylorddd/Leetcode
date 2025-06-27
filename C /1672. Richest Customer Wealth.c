int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealth = 0;

    for (int i = 0; i < accountsSize; i++) {
        int totalWealth = 0;

        for (int j = 0; j < *accountsColSize; j++) {
            totalWealth += accounts[i][j];
        }

        maxWealth = (maxWealth > totalWealth) ? maxWealth : totalWealth;
    }

    return maxWealth;
}

// CODE EXPLAINED ITSELF.
