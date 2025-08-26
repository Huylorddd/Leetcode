int countDigits(int num) {
    int count = 0;
    int temp = num;
    while (temp > 0)
    {
        int odd = temp % 10;
        if (num % odd == 0) count++;
        temp /= 10;
    }
    return count;
}

// CODE EXPLAINS ITSELF.
