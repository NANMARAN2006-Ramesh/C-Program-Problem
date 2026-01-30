#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int count1 = 0;
    while(n--){
        int n2;
        scanf("%d",&n2);
        if(n2==0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("Inactive Weeks: %d\n",count);
    if(count==count1 || count>count1){
        printf("Risk Status: High\n");
    }
    else{
        printf("Risk Status: Low");
    }

    return 0;
}