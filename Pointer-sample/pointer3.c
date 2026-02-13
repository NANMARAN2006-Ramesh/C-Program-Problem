#include<stdio.h>
void sum(int size,int arr[]){
    int *p = arr;
    int sum =0;
    for(int i=0;i<size;i++){
        if(*(p+i)>=50){
            break;
        }
        else{
            sum+=*(p+i);
        }
    }
    printf("The sum of the less then 50 is : %d",sum);
}


int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    sum(size,arr);
    return 0;
}