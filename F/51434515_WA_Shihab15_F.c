#include <stdio.h>
#include <string.h>

int minZeroesToErase(char* s) {
    int n = strlen(s);
    int max_ones = 0;
    int consecutive_ones = 0;
    int total_zeroes = 0;

    // Count consecutive ones and total zeroes
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            total_zeroes++;
            if (consecutive_ones > max_ones) {
                max_ones = consecutive_ones;
            }
            consecutive_ones = 0;
        } else {
            consecutive_ones++;
        }
    }

    // Update max_ones if consecutive ones are at the end of the string
    if (consecutive_ones > max_ones) {
        max_ones = consecutive_ones;
    }

    // Update max_ones if consecutive ones are at the beginning of the string
    if (s[0] == '1' && consecutive_ones > max_ones) {
        max_ones = consecutive_ones;
    }

    // If all 1's or all 0's, no need to erase any 0's
    if (max_ones == n || max_ones == 0) {
        return 0;
    }

    return total_zeroes - max_ones;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int minZeroes = minZeroesToErase(s);
        printf("%d\n", minZeroes);
    }

    return 0;
}
