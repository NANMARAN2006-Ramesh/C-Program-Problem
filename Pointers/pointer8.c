#include <stdio.h>

void StringCat(char str1[], char str2[]) {
    char *s1 = str1;
    char *s2 = str2;
    int i = 0, j = 0;
    while (*(s1 + i) != '\0') {
        i++;
    }
    while (*(s2 + j) != '\0') {
        *(s1 + i) = *(s2 + j);
        i++;
        j++;
    }
    *(s1 + i) = '\0';
    i = 0;
    while (*(s1 + i) != '\0') {
        printf("%c", *(s1 + i));
        i++;
    }
}
void removeNewline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char str1[100];
    char str2[50];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    removeNewline(str1);
    removeNewline(str2);

    StringCat(str1, str2);

    return 0;
}
