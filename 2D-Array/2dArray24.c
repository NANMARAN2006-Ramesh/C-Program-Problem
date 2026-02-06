#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int primes=0;
    for(int i=0;i<r;i++){
        int count = 0;
        for(int j=0;j<c;j++){
            int isprime=1;
            int temp = arr[i][j];
            if(temp<2) continue;
            for(int k=2;k*k<=temp;k++){
                if(temp%k==0){
                    isprime=0;
                }
            }
            if(isprime){
                count++;
            }
        }
        if(count==3){
            primes++;
        }
    }
    printf("The Prime count is %d",primes);
    return 0;
}