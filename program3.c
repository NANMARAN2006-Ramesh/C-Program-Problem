#include<stdio.h>
int main(){
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);
    int sales[length];
    int cost[length];

    printf("Enter the sales unit: \n");
    for(int i=0;i<length;i++){
        scanf("%d",&sales[i]);
    }
    printf("Enter the cost: \n");
    for(int i=0;i<length;i++){
        scanf("%d",&cost[i]);
    }

    int value = 0;
    for(int i=0;i<length;i++){
        int mul = 1;
        if(sales[i]>=100){
            mul = sales[i]*cost[i];
            value = value+mul;
            printf("Day %d ",i+1);
        }
    }

    printf("\nTotal profit is: %d",value);
    return 0;
}