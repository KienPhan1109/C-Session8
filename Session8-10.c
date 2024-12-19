#include <stdio.h>

int main(){
    int i, j, maxCount = 0, n, countElement = 0;
    printf("Nhập vào số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int a[n], element[n];
    for ( i = 0 ; i < n ; i++)
    {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for ( i = 0 ; i < n ; i++)
    {
        int count = 0;
        for ( j = 0 ; j < n ; j++){
            if (a[i] == a[j]){
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            countElement = 0;
            element[countElement++] = a[i];
        }
        else if (count == maxCount){
            int found = 1;
            for ( int k = 0 ; k < countElement ; k++ ){
                if (a[i] == element[k]){
                    found = 0;
                    break;
                }
            }
            if (found == 1) {
                element[countElement++] = a[i];
            }
        }     
    }
    printf("Các phần tử xuất hiện nhiều nhất ( %d lần ): \n", maxCount);
    for ( i = 0 ; i < countElement ; i++)
    {
        printf("%d ", element[i]);
    }
    printf("\n");
}