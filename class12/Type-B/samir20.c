// WAP that takes 5 numbers from the user and sorts them in ascending order
#include <stdio.h>
#include <conio.h>

void align(int arr[], int n);

void main() {
    int numbers[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    align(numbers, 5);
    
    printf("Numbers in ascending order: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    getch();
}

void align(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

