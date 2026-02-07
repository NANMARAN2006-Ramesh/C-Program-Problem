#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;
    int max = 0, second = 0;
    char result = '\0';
    fgets(str, 100, stdin);
    int n = strlen(str);
    if (str[n - 1] == '\n')
        str[n - 1] = '\0';
    n = strlen(str);
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > max) {
            second = max;
            max = count;
        } else if (count < max && count > second) {
            second = count;
        }
    }
    if (max == 1) {
        printf("%c", str[1]);
        return 0;
    }
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == second) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}
