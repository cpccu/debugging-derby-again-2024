#include <stdio.h>

void solve_case(int n) {
    int a[n];
    int half = n / 2;

    for (int i = 0; i < half; ++i) {
        a[i] = 2 * (i + 1);
    }


    for (int i = 0; i < half - 1; ++i) {
        a[half + i] = 2 * i + 1;
    }

    // Calculate the sum of the first half
    int sum_first_half = 0;
    for (int i = 0; i < half; ++i) {
        sum_first_half += a[i];
    }

    // Calculate the sum of the first (half-1) elements of the second half
    int sum_second_half = 0;
    for (int i = 0; i < half - 1; ++i) {
        sum_second_half += a[half + i];
    }

    a[n - 1] = sum_first_half - sum_second_half;

    // Print the array
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n);
        solve_case(n);
    }
    return 0;
}
