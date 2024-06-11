#include <stdio.h>
#include <string.h>

int minZeroesToErase(char* s) {
    int n = strlen(s);
    int max_ones = 0;
    int consecutive_ones = 0;
    int total_zeroes = 0;

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

    if (consecutive_ones > max_ones) {
        max_ones = consecutive_ones;
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
