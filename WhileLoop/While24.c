#include <stdio.h>
int main() {
    int fuel;
    scanf("%d", &fuel);   
    int n;
    scanf("%d", &n);      
    int stage = 0;
    int emergencyStage = -1;
    int wasted = 0;
    while (stage < n) {
        int burn;
        scanf("%d", &burn);
        stage++;
        fuel -= burn;  
        if (fuel < 0 && emergencyStage == -1) {
            emergencyStage = stage;
            wasted = -fuel;          
        }
    }
    if (emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d\n", wasted);
    }
    return 0;
}
