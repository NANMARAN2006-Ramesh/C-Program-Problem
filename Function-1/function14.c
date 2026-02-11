#include<stdio.h>
int perfectNum(int num){
    int temp = num;
    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    if(sum == temp){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a numbner : ");
    scanf("%d",&num);
    perfectNum(num);
    return 0;
}