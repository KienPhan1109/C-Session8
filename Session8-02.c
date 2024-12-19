#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 12, 15, 6, 7, 8, 9, 100}, i, search;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Nhập vào phần tử cần tìm kiếm: ");
    scanf("%d", &search);
    for ( i = 0 ; i < length ; i++)
    {
        if (arr[i] == search)
        {
            printf("Vị trí phần tử trong mảng là: %d\n", i + 1);
            return 0;
        }
    }
    printf("Phần tử không tồn tại trong mảng.");
}