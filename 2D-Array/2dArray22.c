#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int count2=0;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        int count = 0;
        for(int j=0;j<c-1;j++){
            if(arr[i][j+1]>arr[i][j]){
                count++;
                if(count == 3){
                    count2++;
                }
            }
        } 
    }
    printf("The Increasing order department count is %d",count2);

}

