#include <stdio.h>


int main(){



    //Θ(n)                                                 
    int age = 0;                                                   
    int n = 0;
    printf("How many people are you going to ask?\n");
    scanf("%d", &n);                                     //  cost   times executed
    for (int i = 0; i < n; i++) {                        //   c1      n
        printf("How old are you?\n");                    //   c2      n
        scanf("%d", &age);                               //   c3      n
        if (age < 18) {                                  //   c4      n
            printf("You are a minor\n");                 //   c5    <= n
        } else {
            printf("You are an adult\n");                 //  c6    <= n
        }
    }


    

    //Θ(n^2)
    int arr[] = {12, 11, 13, 5, 6};
    int totalSum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);  
                                                    //  cost   times executed
    for (int i = 0; i < n - 1; i++) {               //  c1      (n - 1)
        int currentSum = arr[i] + arr[i + 1];       //  c2      (n - 1)
        for (int j = 0; j < n; j++) {               //  c3      (n - 1) * n
            totalSum += currentSum;                 //  c4      (n - 1) * n
        }
    }

    printf("Total sum: %d\n", totalSum);            // c5      1





    //Θ(n^3)
    int n = 5;                                      // cost   times executed
     for (int i = 0; i < n; i++) {                  // c1      n
        for (int j = 0; j < n; j++) {               // c2      n * n
            for (int k = 0; k < n; k++) {           // c3      n * n * n
                printf("%d ", i + j + k);           // c4      n * n * n
            }
        }
    }




    //Θ(nlogn) with log base 2                       // cost   times executed
    for(int i = 0; i < n; i++){                      // c1      n
        int j = 1;                                   // c2      n
        while(j < n){                                // c3      logn
            j = j * 2;                               // c4      logn
        }
    }





    //Θ(nlogn) with log base 3                       // cost   times executed
    for(int i = 0; i < n; i++){                      // c1      n
        int j = 1;                                   // c2      n
        while(j < n){                                // c3      logn
            j = j * 3;                               // c4      logn
        }
    }


    
    return 0;
}



