#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int firstRepeat = -1;  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                firstRepeat = arr[i];
                break;  
            }
        }
        if (firstRepeat != -1) {
            break;  
        }
    }
    printf("%d\n", firstRepeat);
    return 0;
}
