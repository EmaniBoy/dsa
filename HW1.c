#include <stdio.h>


int main(){

    //O(n)
    char name[100];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    //O(n^2)
    int arr[] = {12, 11, 13, 5, 6};
    for(int i = 0; i < sizeof(arr); i++){
        for(int j = 0; j < sizeof(arr); j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }



    return 0;
}



