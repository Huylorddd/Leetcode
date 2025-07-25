int largestAltitude(int* gain, int gainSize) {
    int altitude = 0;
    int maxAltitude = 0;
    for (size_t i = 0; i < gainSize; i++) {
        altitude += gain[i];
        maxAltitude = (maxAltitude > altitude) ? maxAltitude : altitude;
    }
    return maxAltitude;
}
