#include <stdio.h>

int main(){
    int n, i, j;
    printf("Nhập n: ");
    scanf("%d", &n);
    int a[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            a[i][j] = n;
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
}