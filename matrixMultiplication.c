#include <stdio.h>
#include <stdlib.h>

int main(){
    int rowOne, colOne, rowTwo, colTwo;
    //Intake mat 1 info
    printf("Matrix One rows: ");
    scanf("%d", &rowOne);
    printf("Matrix One columns: ");
    scanf("%d", &colOne);
    //Intake mat 2 info
    printf("Matrix One rows: ");
    scanf("%d", &rowOne);
    printf("Matrix One columns: ");
    scanf("%d", &colOne);

    if(colOne != rowTwo){
        printf("Invalid Matrices\n");
        return 1;
    }

    int* rowOnePtr = (int*)malloc(rowOne*sizeof(int));
    int* colOnePtr = (int*)malloc(colOne*sizeof(int));

    int* rowOnePtr = (int*)malloc(rowOne*sizeof(int));
    int* colOnePtr = (int*)malloc(colOne*sizeof(int));

    //TODO:
    //Finish this mess

}