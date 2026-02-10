#include <stdio.h>
#include <string.h>
int digits(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            count++;
        }
    }
    return count;
}
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int total = digits(str);
    printf("The digits count is %d",total);
    return 0;
}