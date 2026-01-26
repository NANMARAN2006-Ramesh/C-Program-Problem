#include<stdio.h>
int main(){
    int c;
    scanf("%c",&c);
    if(c%3==0 && c%7==0){
        printf("Multiply of both 3 and 7");
    }
    else{
        printf("Not multiply 3 or 7");
    }

    return 0;
}