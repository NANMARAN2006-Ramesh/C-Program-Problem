#include<stdio.h>
int main(){
    //Partial array modification using pointer
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elments: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i=0;i<size;i++){
        if(i%2==0){
            *(p+i)*=2;
        }
    }
    printf("After modification: \n");
    for(int i=0;i<size;i++){
        printf("%d\n",*(p+i));
    }

    return 0;
}