#include <stdio.h>
int main() {
    char str[101]; 
    char *start, *end;
    int length = 0;
    fgets(str,sizeof(str),stdin);
    while (str[length] != '\0') {
        length++;
    }
    start = str;            
    end = str + length - 1; 
    while (start < end) {
        if (*start != *end) {
            printf("NO\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("YES\n");
    return 0;
}
