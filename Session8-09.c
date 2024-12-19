//Khai báo và gán giá trị cho mảng bất kỳ, tiến hành in ra phần tử có số lần xuất hiện nhiều nhất trong mảng đã khai báo.
#include <stdio.h>

int main(){
    int i, j, n, maxElement, maxCount = 0;
    printf("Nhập vào số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int a[n];
    for ( i = 0 ; i < n ; i++){
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for ( i = 0 ; i < n ; i++)
    {
        int count = 0;
        for ( j = 0 ; j < n ; j++)
        {
            if (a[j] == a[i])
            {
                count++;
            }
            
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxElement = a[i];
        }
        
        
    }
    printf("Phần tử suất hiện nhiều nhất là: %d\n", maxElement);
    printf("Số lần xuất hiện: %d", maxCount);
    
}