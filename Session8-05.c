#include <stdio.h>

int main(){
    int i, j, sum = 0;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 10}};
    printf("Các phần tử nằm trên đường biên của ma trận:\n");
    // Trên cùng
    for ( j = 0 ; j < 3 ; j++ )
    {
        printf("%d ", arr[0][j]);
        sum += arr[0][j];
    }
    // Bên trái
    for ( i = 1 ; i > 0 ; i-- )
    {
        printf("%d ", arr[i][0]);
        sum += arr[i][0];
    }
    // Bên phải
    for ( i = 1 ; i < 2 ; i++ )
    {
        printf("%d ", arr[i][2]);
        sum += arr[i][2];
    }
    // Dưới cùng
    for ( j = 2 ; j >= 0 ; j-- )
    {
        printf("%d ", arr[2][j]);
        sum += arr[2][j];
    }
    printf("\n");
    printf("Tổng phần tử ở biên là: %d", sum);
}