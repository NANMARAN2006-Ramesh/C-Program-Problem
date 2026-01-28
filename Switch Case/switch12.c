#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int trip;
    scanf("%d",&trip);
    switch (m)
    {
        case 1:
            if(trip==1){
                printf("100");
            }
            else if(trip>=1 && trip<=30){
                printf("800");
            }
            break;
        case 2:
            if(trip==1){
                printf("240");
            }
            else if(trip>=1){
                int bill = trip*240;
                printf("%d",bill);
            }
            break;
    
    default:
        break;
    }
    return 0;
}