#include<stdio.h>
int main(){
    int m,grade;
    scanf("%d",&m);
    if(m>=90 && m<=100){
        grade = 1;
    }
    else if(m>=75 && m<=89){
        grade=2;
    }
    else if(m>=60 && m<=74 ){
        grade = 3;
    }
    else if(m>50 && m<=59){
        grade = 4;
    }
    else if(m>=40 && m<=49){
        grade = 5;
    }
    else if(m>=35 && m<=39){
        grade = 6;
    }

    switch(grade)
    {
        case 1: printf("Grade A");
            break;
        case 2: printf("Grade B");
            break;
        case 3: printf("Grade c");
            break;
        case 4: printf("Grade D");
            break;
        case 5: printf("Grade E");
            break;
        case 6: printf("Supplementary");
            break;
    }


}