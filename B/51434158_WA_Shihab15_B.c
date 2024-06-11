#include <stdio.h>

void solve_case(int n) {
    int a[n];


    for (int i = 0; i < n / 2; ++i) {
        a[i] = (i + 1) * 2;
    }


    for (int i = 0; i < n / 2; ++i) {
        a[n / 2 + i] = (i * 2) + 1;
    }

    int sum_first_half = 0, sum_second_half = 0;
    for (int i = 0; i < n / 2; ++i) {
        sum_first_half += a[i];
        sum_second_half += a[n / 2 + i];
    }

    a[n / 2 - 1] += (sum_second_half - sum_first_half);

   
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
