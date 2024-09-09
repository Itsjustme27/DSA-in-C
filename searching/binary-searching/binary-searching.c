// binary searching

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key);

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int lower = 0, upper = 4, item, result;
    
    printf("Enter the item to search: ");
    scanf("%d", &item);
    
    result = binarySearch(arr, lower, upper, item);
    if(result != 0) { 
        printf("Search found at position %d\n", result); 
    } else {
        printf("Search not found\n");
    }
    return 0;
}

int binarySearch(int arr[], int left, int right, int key) {
	int flag = 0;
    if(left <= right) {
        int m = (left + right) / 2;
        if(key == arr[m]) {
            return m;
        } else if(key < arr[m]) {
            return binarySearch(arr, left, m - 1, key);
        } else {
            return binarySearch(arr, m + 1, right, key);
        }
    }
    return flag; // Return -1 if the item is not found
}
