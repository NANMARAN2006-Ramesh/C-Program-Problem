#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    char ch;
    scanf(" %c",&ch);
    switch(type){
        case 1: 
            if(ch=='A'){
                printf("2500");
            }
            else if(ch=='B'){
                printf("2000");
            }
            break;
        case 2:
            if(ch=='C'){
               printf("4000");
            }
            else{
                printf("3000");
            }
            break;
    }
    return 0;
}