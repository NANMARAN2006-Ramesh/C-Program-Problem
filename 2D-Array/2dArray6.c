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
    int mindiff;
    int sum1 = 0;
    int sum2=0;
    int diff = 0;
    for(int j=0;j<c;j++){
        sum1 = sum1+arr[0][j];
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            sum2=sum2+arr[i][j];
        }
        mindiff = sum2-sum1;
        if(mindiff>diff){
            diff=mindiff;
            sum1 = sum2;
        }
    }
    printf("The maximum different : %d",diff);
}