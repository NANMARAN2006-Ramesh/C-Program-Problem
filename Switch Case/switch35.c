#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int litre;
    scanf("%d",&litre);
    switch (type)
    {
        case 1: 
            int sum = litre*100;
            printf("Fuel Cost %d",sum);
            break;
        case 2:
            int total = litre*92;
            printf("Fuel Cost %d",total);;
            break;
        case 3:
            int bill = litre*85;
            printf("Fuel Cost %d",bill);
            break;
    }
    return 0;
}
