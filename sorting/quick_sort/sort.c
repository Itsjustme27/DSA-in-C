#include <stdio.h>

void swap(int *pt1, int *pt2)
{
    int temp;
    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pivot = arr[high];
        int i = (low - 1);
        for(int j = low; j <= high - 1; j++){
            if (arr[j] < pivot)
            {
                ++i;
                swap(&arr[i], &arr[j]);
            }
            
        }
        swap(&arr[i+1], &arr[high]);
        quickSort(arr, low, i);
        quickSort(arr, i+2, high);
    }
}

int main(){
    int i,j, high, low, pivot, temp,n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values of array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n-1);
    printf("Sorted Result: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}