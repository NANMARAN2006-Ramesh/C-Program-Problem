#include<stdio.h>
int main(){
    int price,dt;
    scanf("%d%d",&price,&dt);
    switch(dt){
        case 1: 
            printf("Delivery 50");
            break;
        case 2:
            if(price<1000){
               printf("Delivery 100");
            }
            else{
                printf("Free");
            }
            break;
    }
    return 0;
}