#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int j = strlen(str) - 1;
    int count = 0;
    for (int i = 0; i < j; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9'))) {
            count++;
        }
    }
    printf("The special character count is %d", count);
    return 0;
}
