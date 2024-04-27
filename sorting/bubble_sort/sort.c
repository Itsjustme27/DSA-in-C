//ascending order
#include <stdio.h>

int main(){
    int temp,num;
    printf("Enter the range: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of array: ");
    for(int i = 0; i < num ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted elements are: ");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}