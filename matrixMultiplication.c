#include <stdio.h>
#include <stdlib.h>

int dotProduct(int* vector1, int* vector2, int length);

int main(){
    int rowOne, colOne, rowTwo, colTwo;
    //Intake mat 1 info
    printf("Matrix One rows: ");
    scanf("%d", &rowOne);
    printf("Matrix One columns: ");
    scanf("%d", &colOne);
    //Intake mat 2 info
    printf("Matrix Two rows: ");
    scanf("%d", &rowTwo);
    printf("Matrix Two columns: ");
    scanf("%d", &colTwo);
    
    /*
    if(colOne != rowTwo){
        printf("Invalid Matrices\n");
        return 1;
    }
    */

    int* matOnePtr = (int*)malloc(colOne*rowOne*sizeof(int));

    int* matTwoPtr = (int*)malloc(colTwo*rowTwo*sizeof(int));

    int* resultMat = (int*)malloc(rowOne*colTwo*sizeof(int));

    //TODO:
    //Finish this mess

    //For loop?
    //Matrix One input:
    int i, j;
    for(i = 0; i < colOne; i++){
        for(j = 0; j < rowOne; j++){
            printf("Matrix One: Input row %d, column %d: ", i, j);
            scanf("%d",matOnePtr+(i*rowOne)+j);
            //printf("\n");
        }
    }

    //Works now:
    /*
    for(i=0; i < colOne; i++){
        for(j=0; j < rowOne; j++){
            printf(" %d ", *(matOnePtr+i));
        }
    }
    */

   for(i = 0; i < colTwo; i++){
        for(j = 0; j < rowTwo; j++){
            printf("Matrix One: Input row %d, column %d: ", i, j);
            scanf("%d",matTwoPtr+(i*rowTwo)+j);
            //printf("\n");
        }
    }

    printf("Loading now \n");



}


int dotProduct(int* vector1, int* vector2, int length){
    int i, sum = 0;
    for(i = 0; i < length; i++){
        sum = *(vector1+i)+*(vector2+i);
    }
    return sum;
}