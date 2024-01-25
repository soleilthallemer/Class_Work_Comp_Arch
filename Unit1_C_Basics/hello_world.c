// Soleil Thallemer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER 5;

int main(int argc, char* argv[]){
    printf("Hello World!\n");
    printf("😊\n");
    printf("%d) option %s", 1, "ONE" );

    // statically typed
    int number = 32;
    char phrase[20] = "Hello World!";

    // for loops in c
   // for(int x = 0; x < NUMBER; x++){
        // do something
   // } 

    // functions in c
    int getSum(int a, int b){
        return a + b;
    }

    int whole_number = 42;
    int* whole_number_pointer = &whole_number;

    // setting equal, updating value to where whole number lives
    *whole_number_pointer = 21;

    // prints 21
    printf("\n\n%d", whole_number);
    // printing a pointer - printf symbol, %p
    printf("\n%d", *whole_number_pointer);
    // printing pointer address
    printf("\n%p", whole_number_pointer);

    printf("\n\nbytes in int: %ld", sizeof(int));

    whole_number_pointer += 1;
    printf("\n\n%p", whole_number_pointer);

    // allocates unintialized memory and returns pointer
    int* malloced_int = 
            (int*) malloc(sizeof(int));

    // malloced double
    double* malloced_double =
            (double*) malloc(sizeof(double));
    *malloced_double = 102.45;
    printf("\n\n%lf", *malloced_double);

    // calloc - allocates intialized memory, sets to 0
    free(malloced_double);

    int* bad_pointer = (int*) 42;
    //printf("%d",*bad_pointer);

    int num;
    printf("\nprompt!");
    scanf("%d", &num);

    int* array = (int*) calloc(5, sizeof(int));

    // update element at index 3
    // array[3]
    *(array + 3) = 56;

    return 0; // no errors

}