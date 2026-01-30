#include<stdio.h>
#include <stdbool.h>
int main(){
    int totaldata;
    scanf("%d",&totaldata);
    int num;
    scanf("%d",&num);
    int sum=0;
    bool s=false;
    int count=0;
    while(num--){
        int n1;
        scanf("%d",&n1);
        sum+=n1;
        if(sum<=totaldata){
            count++;
        }
        else{
            s=true;
        }
    }
    printf("Days Used: %d\n",count);
    if(s){
        printf("Remaining Data: %dGB",0);
    }
    else{
        printf("Remaining Data: %dGB",totaldata-sum);
    }
    return 0;  
}