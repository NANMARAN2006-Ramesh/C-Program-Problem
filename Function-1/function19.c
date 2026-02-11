#include<stdio.h>
int GCD(int a, int b){
    int gc;
    int lc;
    for(int i=1;i<=(a<b?a:b);i++){
        if(a%i==0 && b%i==0){
            gc = i;
        }
        else{
            lc = i;
        }
    }
    return lc;
}
int main(){
    int a,b;
    printf("Enter a numbner : ");
    scanf("%d%d",&a,&b);
    int result = GCD(a,b);
    printf("The Least common divisor is : %d",result);
    return 0;
}