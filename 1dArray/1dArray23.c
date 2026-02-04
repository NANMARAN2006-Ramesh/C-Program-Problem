#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int closest = arr[0];  
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int absCurrent = (current < 0) ? -current : current;
        int absClosest = (closest < 0) ? -closest : closest;
        if (absCurrent < absClosest) {
            closest = current;
        } else if (absCurrent == absClosest) {
            if (current > closest) {
                closest = current;
            }
        }
    }
    printf("%d\n", closest);
    return 0;
}
