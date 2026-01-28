#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch (type)
    {
        case 1: 
            printf("Upgrade fee 300");
            break;
        case 2:
            printf("Upgrad fee 800");
            break;
        case 3:
            printf("Upgrad fee 1500");
            break;
    }
    return 0;
}
