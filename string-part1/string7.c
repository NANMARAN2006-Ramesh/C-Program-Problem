#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    int count = 0;
    int count2 = 0;
    for(int i=0;i<j;i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        else{
            count2++;
        }
    }
    printf("The consonant count is %d",count2);
    return 0;
}