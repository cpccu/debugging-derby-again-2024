#include <stdio.h>

void printGrid(int n, int m) {
    char grid[n][m];

    // Fill the grid with a checkerboard pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                grid[i][j] = 'B';
            } else {
                grid[i][j] = 'W';
            }
        }
    }

    // Ensure the bottom-right cell is 'B'
    grid[n-1][m-1] = 'B';

    // Print the grid
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for(int testCase = 0; testCase < t; testCase++) {
        int n, m;
        scanf("%d %d", &n, &m);
        printGrid(n, m);
    }

    return 0;
}
