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
    int first = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int x=0;x<r;x++){
                for(int y= (x == i ? j+1 : 0);y<c;y++){
                    if(arr[i][j]==arr[x][y]){
                        first=arr[i][j];
                        printf("%d",first);
                        return 0;
                    }
                }
            }
        }
    }
    printf("%d",first);
}