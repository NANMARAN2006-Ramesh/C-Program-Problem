#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int Current = 1;
    int max = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            Current++;
        }
        if(Current>max){
            max = Current;
        }
        else{
            Current=1;
        }
    }
    printf("count : %d",max);
    return 0;
}