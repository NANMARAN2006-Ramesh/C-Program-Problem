#include<stdio.h>
int main(){
    int mode;
    scanf("%d",&mode);
    switch (mode)
    {
        case 1: 
            printf("Deliver Charge 40");
            break;
        case 2:
            printf("Deliver charge 120");
            break;
        case 3:
            printf("Free");
            break;
    }
    return 0;
}
