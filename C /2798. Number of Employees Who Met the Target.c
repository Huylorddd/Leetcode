int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int result = 0;
    for (int i = 0; i < hoursSize; i++) {
        if (hours[i] >= target) result++;
    }

    return result;
}
