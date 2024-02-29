#include <stdio.h>
#include <malloc.h>

void merge_sort_recursive(int arr[], int reg[], int start, int end)
{

    int len = end - start, mid = (len >> 1) + start;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    int k = start;
    if (start >= end)
        return;
    merge_sort_recursive(arr, reg, start1, end1);
    merge_sort_recursive(arr, reg, start2, end2);
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    while (start1 <= end1)
        reg[k++] = arr[start1++];
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    for(k = start; k <= end; k++)
        arr[k] = reg[k];
}

void merge_sort(int arr[], const int len)
{
    int *reg;
    reg = (int*)malloc(len * sizeof(int));
    merge_sort_recursive(arr, reg, 0, len - 1);
}

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int) sizeof(arr) / sizeof(*arr);
    int i;

    merge_sort(arr, len);

    for(i = 0; i < len; i++)
        printf("a[%d] = %d\n", i, arr[i]);

    return 0;
}

