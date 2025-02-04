#include <stdio.h>


int main(){

    //O(n)
    int age = 0;
    printf("How old are you?\n");
    scanf("%d", &age);
    if(age < 18){
        printf("You are a minor\n");
    } else {
        printf("You are an adult\n");
    }
    

    //O(n^2)
    int arr[] = {12, 11, 13, 5, 6};
    int totalSum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < n - 1; i++) {     
        int currentSum = arr[i] + arr[i + 1];
        for (int j = 0; j < n; j++) {      
            totalSum += currentSum;
        }
    }

    printf("Total sum: %d\n", totalSum);


    return 0;
}



