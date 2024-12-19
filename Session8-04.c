#include <stdio.h>

int main(){
    int arr[3][5]={{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 200}};
    int i, j;
    int max = arr[0][0];
    int length = sizeof(arr) / sizeof(arr[0][0]);
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 5; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
        }
    }
    printf("%d", max);
}