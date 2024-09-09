#include <stdio.h>

int main(){
    int temp, num;
    printf("Enter a range: ");
    scanf("%d", &num);
    int arr[num];#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int result = gcd(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) 
        return a;
    else
        return gcd(b, a % b);
}

    printf("Enter the elements of array: ");
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < num; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if(arr[j-1] > arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
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
