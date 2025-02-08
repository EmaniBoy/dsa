#include <stdio.h>

// insertion sort practice 

void insertionsort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int key = arr[i]; 
        int j = i - 1; 

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;

    }
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }

}


int main(){
    int arr[] = {20, 18, 100, 79, 5, 56, 31, 39, 69, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\noriginal array: ");
    printarray(arr, n);

    printf("\nsorted array: ");
    insertionsort(arr, n);
    printarray(arr, n);
}