#include<stdio.h>
int main(){
    int cat;
    scanf("%d",&cat);
    switch (cat)
    {
        case 1: 
            printf("Consultation Fee 500");
            break;
        case 2:
            printf("Consultation Fee 1200");
            break;
    }
    return 0;
}
