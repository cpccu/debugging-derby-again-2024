#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (i % 2 == 0) {
                    if (j % 2 == 0) {
                        printf("B");
                    } else {
                        printf("W");
                    }
                } 
                else {
                    if (j % 2 == 0) {
                        printf("W");
                    } else {
                        printf("B");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
