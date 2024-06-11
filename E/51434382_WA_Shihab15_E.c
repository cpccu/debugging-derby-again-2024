#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_palindrome(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void reverse_string(char* s, char* reversed) {
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        reversed[i] = s[len - i - 1];
    }
    reversed[len] = '\0';
}


int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char strings[n][m+1];
    for (int i = 0; i < n; ++i) {
        scanf("%s", strings[i]);
    }

    int used[n];
    memset(used, 0, sizeof(used));
    
    char palindrome[1000000];
    char left_half[500000];
    char right_half[500000];
    char center[1000000];
    left_half[0] = '\0';
    right_half[0] = '\0';
    center[0] = '\0';


    for (int i = 0; i < n; ++i) {
        if (used[i]) continue;
        char reversed[m+1];
        reverse_string(strings[i], reversed);
        for (int j = 0; j < n; ++j) {
            if (i != j && !used[j] && strcmp(reversed, strings[j]) == 0) {
                strcat(left_half, strings[i]);
                char temp[m+1];
                strcpy(temp, strings[j]);
                strcat(temp, right_half);
                strcpy(right_half, temp);
                used[i] = 1;
                used[j] = 1;
                break;
            }
        }
        if (!used[i] && is_palindrome(strings[i])) {
            strcpy(center, strings[i]);
        }
    }


    strcpy(palindrome, left_half);
    strcat(palindrome, center);
    strcat(palindrome, right_half);

    printf("%lu\n", strlen(palindrome));
    printf("%s\n", palindrome);

    return 0;
}
