//linear searching
#include <stdio.h>

int main(){
    int arr[3], i = 0, item;
    printf("Enter 3 elements of array: ");
    for(int i = 0; i < 3; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the item to search: ");
    scanf("%d", &item);
    while (i < 3)
    {
        if (arr[i] == item)
        {
            printf("Item found at location %d", i);
        }else{
            printf("Item not found");
            break;
        }
        i++;
    }
    return 0;
}