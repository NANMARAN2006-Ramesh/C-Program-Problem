#include<stdio.h>
int main(){
    int range;
    scanf("%d",&range);
    int arr[range];
    int temp=0;
    for(int i=0;i<range;i++){
        scanf("%d",&arr[i]);
        temp=arr[range-1];
        arr[range-1]=arr[0];
        arr[0]=temp;
    }
    
}