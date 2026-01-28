#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(; n > 0 ; n = n/10){
        printf("%d",n%10);
    }
    return 0;
}