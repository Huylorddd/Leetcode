int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int total = 0;

    for (int i = 0; i < timeSeriesSize; i++) {
        if (i == 0) {
            total += duration;                                      // we skipped the first timestamp since it's the point to start counting total duration.
            continue;
        }
        if (timeSeries[i] > timeSeries[i-1] + duration - 1) {
            total += duration;                                       // if the next hit happens after the poison's duration over, we add the duration to total time.
        } else {
            total += (timeSeries[i] - timeSeries[i-1]);              // else we still add the duration but do substraction with the left duration that had been reset by us.
        }                                                            // E.g. [1,2,3], duration = 2 ==>  1 -> (reset)2 -> (reset)3 -> 4  TOTAL TIME = 4. 
    }

    return total;
}
