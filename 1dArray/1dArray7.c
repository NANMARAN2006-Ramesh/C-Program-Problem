#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int counteven =0;
    int countodd=0;
    for(int i=0;i<n ;i++){
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("Even: %d\n",counteven);
    printf("Odd: %d",countodd);
    return 0;
}