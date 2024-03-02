bool is_fanarray(int array[], int n) {
    if (n < 1) return false;

    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - 1 - i]) return false;
        // Corrected ascending order check
        if (i > 0 && array[i] < array[i - 1]) return false; // This line was previously incorrect
    }

    // Check for non-decreasing order up to the middle
    for (int i = 0; i < (n / 2) - 1; i++) {
        if (array[i] > array[i + 1]) return false;
    }

    return true;
}
