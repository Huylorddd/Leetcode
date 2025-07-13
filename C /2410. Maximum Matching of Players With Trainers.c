int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int matchPlayersAndTrainers(int* players, int playersSize, int* trainers, int trainersSize) {
    int count = 0;
    qsort(players, playersSize, sizeof(int), compare);
    qsort(trainers, trainersSize, sizeof(int), compare);

    int i = 0, j = 0;
    while (i < playersSize && j < trainersSize) {
        if (players[i] <= trainers[j]) {
            count++;
            i++;                                      // since we've sorted both arrays, that means we can skip trainer(s) who is weaker than current (index) player's ability. (players MUST HAVE trainers and otherwise).
            j++;                                      // while loop is only choice to avoid TLE.
        }
        else j++;
    }

    return count;
}
