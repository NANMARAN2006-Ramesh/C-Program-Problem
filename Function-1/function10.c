#include<stdio.h>
int sumNatruralNumber(int num){
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int result = sumNatruralNumber(num);
    printf("The sum of the first N natural number is : %d",result);
    return 0;
}