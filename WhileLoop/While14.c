#include<stdio.h>
int main(){
    int cash;
    scanf("%d",&cash);
    int n;
    scanf("%d",&n);
    int sum = 0;
    int count=0;
    while(n--){
        int s1;
        scanf("%d",&s1);
        sum+=s1;
        if(sum<=cash){
            count++;
        }
    }
    int rem;
    if(sum>cash){
        rem=sum-cash;
    }
    else{
        rem = cash-sum;
    }
    printf("Successful Withdrawls: %d\n",count);
    printf("Remaining Cash: %d",rem);
    
}