#include <stdio.h>

int main(){
    int n, i, j, sum = 0;
    printf("Nhập vào cạnh hình vuông: ");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Phần tử [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Các phần tử trên đường chéo phụ của hình vuông là: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i][n - 1 - i]);
        sum += a[i][i];
    }
    printf("\n");
    printf("Tổng các phần tử trên đường chéo phụ của ma trận là: %d\n", sum);
}