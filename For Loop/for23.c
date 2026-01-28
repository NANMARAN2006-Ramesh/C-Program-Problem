#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int prime=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            prime=1;
        }
    }
    if(prime==1){
        printf("Not a prime");
    }
    else{
        printf("prime");
    }
    return 0;
}