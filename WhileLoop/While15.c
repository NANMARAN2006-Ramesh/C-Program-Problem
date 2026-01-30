#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    int sum = 0;
    while(n--){
        int n1;
        scanf("%d",&n1);
        sum=sum+n1;
        if(n1>4){
            count++;
        }
    }
    printf("Total Overtime: %d\n",sum);
    printf("Burnout Days:%d",count);
    return 0;
}