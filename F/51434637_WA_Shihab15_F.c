#include <stdio.h>
#include <string.h>

int minZeroesToErase(char* s) {
    int n = strlen(s);
    int max_ones = 0;
    int current_ones = 0;
    int total_zeroes = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            current_ones++;
        } else {
            total_zeroes++;
            if (current_ones > max_ones) {
                max_ones = current_ones;
            }
            current_ones = 0;
        }
    }

    // Update max_ones if the last segment consists of 1's
    if (current_ones > max_ones) {
        max_ones = current_ones;
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
