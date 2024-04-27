//binary searching

#include <stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50}; 
    int item;
    int lower = 0, upper = 4, finding = 0, mid = 0;
    printf("Enter an item to search: ");    
    scanf("%d", &item);
    while (lower <= upper)
    {
        mid = (lower + upper) /2;
        if (arr[mid] == item)   
        {
            finding = 1;
            break;
        }
        if (arr[mid] < item)
        {
            lower = mid + 1;
        }else{
            upper = mid - 1;
        }
        
    }
    if (finding == 1)   
    {
        printf("Item found at %d", mid);
    }else{
        printf("Item not found");
    }
    return 0;
    
}