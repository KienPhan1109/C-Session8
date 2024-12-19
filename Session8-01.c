#include <stdio.h>

int main(){
    int a[] = {1, 3, 5, 7, 9}, i;
    int length = sizeof(a) / sizeof(a[0]);
    for( i = length - 1; i >= 0; i-- ){
        printf("%d ", a[i]);
    }
}