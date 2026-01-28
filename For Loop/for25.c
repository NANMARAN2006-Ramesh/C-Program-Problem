#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int temp=n;
    for(;n>0;n=n/10){
        int a = n%10;
        int fact = a*a*a;
        sum = sum+fact;
    } 
    if(temp==sum){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}