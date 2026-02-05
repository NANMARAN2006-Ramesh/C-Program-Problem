#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and coloumn size :\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = 0;
    int max2 = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<max && arr[i][j]>max2){
                max2=arr[i][j];
            }
        }
    }

    printf("The second highes distinct salary is %d",max2);
    return 0;
}