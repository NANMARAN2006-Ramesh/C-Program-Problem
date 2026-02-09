#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    int count = 0;
    for(int i=0;i<j;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("The space count is %d",count);
    return 0;
}