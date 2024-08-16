#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;

    printf("Enter number of element to be recorded: \n");
    scanf("%d", &number);

    int* numberPtr = (int*) malloc(number *sizeof(int));

    if(numberPtr == NULL){
        printf("Unable to allocate \n");
        return 1;
    }

    printf("Enter the numbers: \n");

    int sum=0;

    int i;
    for(i = 0; i < number; i++){
        scanf("%d", numberPtr +i);
        sum = sum + *(numberPtr+i);
    }

    printf("Sum = %d \n", sum);

    free (numberPtr);



    return 0;
}