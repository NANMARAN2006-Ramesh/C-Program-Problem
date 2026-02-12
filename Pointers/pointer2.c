#include<stdio.h>
void Maximum(int size,int arr[]){
    int *p = arr;
    int max = 0;
    for(int i=0;i<size;i++){
        if(*(p+i)>max){
            max = *(p+i);
        }
    }
    printf("The maximum element is : %d",max);
}
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    Maximum(size,arr);
    return 0;
}