#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    int j = strlen(str) - 1; 
    for (int i = 0; i < j; i++) {
        str2[i]=str[i];
    }
    for(int k=0;k<j;k++){
        printf("%c",str2[k]);
    }
    return 0;
}
