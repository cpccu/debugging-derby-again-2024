#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        // Output the colored matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Alternate between black and white cells in each row
                if ((i + j) % 2 == 0) {
                    printf("B");
                } else {
                    printf("W");
                }
            }
            printf("\n");
        }
        // For the last row, if the number of columns is odd, print "B" for the first cell
        if (m % 2 != 0) {
            printf("B\n");
        }
    }

    return 0;
}
