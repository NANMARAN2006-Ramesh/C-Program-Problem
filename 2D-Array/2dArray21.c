#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    int count2 = 0;
    int index = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 1; j < c; j++)
        {
            if (arr[i][j] > arr[i][j + 1])
            {
                count++;
            }
        }
        printf("Count is %d\n",count);
        if (count > count2)
        {
            index = i;
            count2 = count;
        }
    }
    printf("Highest alternation even-odd index is : %d",index);
    return 0;
}