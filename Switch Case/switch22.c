#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int unit;
    scanf("%d",&unit);
    switch (type)
    {
        case 1:
            if(unit>=1 && unit<=30){
                int a1= unit*5;
                printf("%d",a1);
            }
            else{
                int a = (30*5)+(unit-30)*8;
                printf("%d",a);
            }
            break;
        case 2:
            if(unit>=1){
                int a = unit*10;
                printf("%d",a);
            }
            break;
        default:
            break;
    }
    return 0;
}
