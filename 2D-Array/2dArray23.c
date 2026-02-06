
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    int sum = 0;
    int temp = arr[1][1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp=arr[i][j];
            if(arr[i][j]==temp){
                continue;
            }
            sum=sum+arr[i][j];
        }
    }
    printf("Sum is %d",sum);
    return 0;
}