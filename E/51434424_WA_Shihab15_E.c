#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char strings[n][m + 1];
    for (int i = 0; i < n; ++i) {
        scanf("%s", strings[i]);
    }


    char palindromes[n][m + 1];
    char pairs[n][m + 1];

    int palindrome_count = 0;
    int pair_count = 0;


    for (int i = 0; i < n; ++i) {
        if (is_palindrome(strings[i])) {
            strcpy(palindromes[palindrome_count++], strings[i]);
        } else {

            char reversed[m + 1];
            strcpy(reversed, strings[i]);
            strrev(reversed);
            for (int j = i + 1; j < n; ++j) {
                if (strcmp(reversed, strings[j]) == 0) {
                    strcpy(pairs[pair_count++], strings[i]);
                    strcpy(pairs[pair_count++], strings[j]);
                    break;
                }
            }
        }
    }


    printf("%d\n", palindrome_count * m + pair_count * m);
    for (int i = 0; i < pair_count; ++i) {
        printf("%s", pairs[i]);
    }
    for (int i = 0; i < palindrome_count; ++i) {
        printf("%s", palindromes[i]);
    }

    return 0;
}
