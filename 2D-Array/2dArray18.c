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
    int max=0;
    int min = 0;
    int diff = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(min == 0 || arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    diff = max-min;
    printf("diff is %d\n",diff);
    return 0;
}