#include <stdio.h>
#include <math.h>

void solve_case(int n) {
    int k = 2;
    while (1) {
        int divisor = (1 << k) - 1; 
        if (n % divisor == 0) {
            int x = n / divisor;
            printf("%d\n", x);
            break;
        }
        k++;
    }
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases
    while (t--) {
        int n;
        scanf("%d", &n); // Read the value of n for each test case
        solve_case(n);
    }
    return 0;
}
