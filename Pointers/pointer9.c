#include<stdio.h>
void FindElement(int size, int arr[],int find){
    int *p = arr;
    int index = -1;
    for(int i=0;i<size;i++){
        if(*(p+i)==find){
            index = i+1;
        }
    }
    printf("The element index is: %d",index);
}

int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element:\n ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int find;
    printf("Enter the find element: ");
    scanf("%d",&find);
    FindElement(size,arr,find);
    return 0;
}