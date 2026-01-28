#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    int a;
    scanf("%d",&a);
    if(mark>=75 && mark<=100 && a>=75){
        printf("Distinction");
    }
    else if(mark>=50 && mark<=74 && a>=75){
        printf("Pass");
    }
    else if(mark<50 || a<75){
        printf("Fail");
    }
    return 0;

}