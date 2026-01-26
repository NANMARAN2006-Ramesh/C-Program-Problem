#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c && b==c && c==b){
        printf("Equilateral triangle");
    }
    else{
        printf("Not a equitrianglt");
    }

    return 0;
}