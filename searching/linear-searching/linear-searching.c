//linear searching
#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    int i, item;
    printf("Enter the item to search: ");
    scanf("%d", &item);
    while (i < 5)
    {
        if(arr[i] == item){
            printf("Item found at %d", i);
            exit(0);
        }
        ++i;
    } 
    if(i > 5){
        printf("Item not found!");
        exit(0);
    }
    return 0;
}