#include<stdio.h>
int main(){
    int m,n;
    scanf("%d\n%d",&m,&n);
    int sum =0;
    for (int i=1;i<=n;i++){
        int mul = m*i;
        if(mul<=n){
            sum = sum+mul;
        }
    }
    printf("%d",sum);
    return 0;
}