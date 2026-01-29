#include<stdio.h>
int main(){
    int space = 8;
    int space1 = 2;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int i=space;i>=1;i--){
            printf(" ");
        }
        space-=2;
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            printf("*");
        }
        for(int k=1;k<=space1;k++){
            printf(" ");
        }
        space1+=2;
        for(int j=4;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}