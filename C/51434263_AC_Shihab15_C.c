#include <stdio.h>

void solve_case(int a, int b, int c, int d) {
    int x = b;
    int y = c;
    int z = c;


    if (b + c <= c) {
        z = c + 1;
    }

    printf("%d %d %d\n", x, y, z);
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);  
        solve_case(a, b, c, d);
    }
    return 0;
}
