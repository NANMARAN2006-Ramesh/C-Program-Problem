#include<stdio.h>
int main(){
    int space = 0;
    int space1 = 8;
    for(int s=1;s<=5;s++){
        for(int i=5;i>=s;i--){
            printf("*");
        }
        for(int i=1;i<=space;i++){
            printf(" ");
        }
        space+=2;
        for(int j=5;j>=s;j--){
            printf("*");
        }
        printf("\n");
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int i=1;i<=space1;i++){
            printf(" ");
        }
        space1-=2;
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}