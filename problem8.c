#include <stdio.h>

int main() {
    int rows = 5; 
    for(int i=rows; i>=1; i--){
        for(int k=1;k<=rows-i;k++){
            printf(" ");
        }
        for(int j=(2*i-1);j>=1;j--){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}