#include <stdio.h>
int main() {
    int num;
    printf("Enter the Size of Array : ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter the Element in Array : ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }

    printf("Sum of array element : ");
    for (int i = 0; i < num; i++) {
        printf(" %d\n", sum);
    }
    
    return 0;
}