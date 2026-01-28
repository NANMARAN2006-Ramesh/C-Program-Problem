#include<stdio.h>
int main(){
    int cat;
    scanf("%d",&cat);
    int hour;
    scanf("%d",&hour);
    switch (cat)
    {
        case 1:
            if(hour>=1 && hour<=24){
                int total = hour*10;
                printf("Parking Fee %d",total);
            }
            break;
        case 2:
            if(hour>=1 && hour<=24){
                int total = hour*20;
                printf("Parking Fee %d",total);
            }
            break;
    default:
        break;
    }
    return 0;
}