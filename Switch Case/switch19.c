#include<stdio.h>
int main(){
    int attempt;
    scanf("%d",&attempt);
    int score;
    scanf("%d",&score);
    switch (attempt)
    {
        case 1:
            if(score>=80 && score<=100){
                printf("Excellent");
            }
            else{
                printf("Not Qualified");
            }
            break;
        case 2:
            if(score>=60 && score<=100){
                printf("Good");
            }
            else{
                printf("Not Qualified");
            }
            break;
        default:
            printf("Needs Improvement");
            break;
    }
    return 0;
}