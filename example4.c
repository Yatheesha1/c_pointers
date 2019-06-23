#include <stdio.h>

int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    printf("%d %d %d %d %d %d %d\n", arr, *arr, arr + 1, *arr + 1, *(arr + 1), &arr, **&arr);
    return 0;
}
//1712373344 11 1712373348 12 22 1712373344 11