#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int hour;
    scanf("%d",&hour);
    switch (type)
    {
        case 1: 
            if(hour<=1){
            printf("Short Interruption");
            }
            else if(hour<=4){
                printf("Medium Interruption");
            }
            else{
                printf("Long Interruption");
            }
            break;
    }
    return 0;
}
