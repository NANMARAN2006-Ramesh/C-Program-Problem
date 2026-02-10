#include<stdio.h>
int distinct(int size,int arr[]){
    int count = 0;
    for(int i=0;i<size;i++){
        int distinct = 1;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                distinct=0;
                break;
            }
        }
        if(distinct){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int total = distinct(size,arr);
    printf("The total distinct unique number count is %d",total);
    return 0;
}