#include <stdio.h>

int main()
{
    int temp, loc, least, num;
    printf("Enter a range: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of array: ");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++){
        least = arr[i];
        loc = i;
        for(int j = i+1; j < num; j++){
            if(arr[j] < least){
                least = arr[j];
                loc = j;
            }
        }
        if(arr[loc] < arr[i]){
            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }
    }
    printf("The sorted array: ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
