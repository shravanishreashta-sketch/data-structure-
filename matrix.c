#include<stdio.h>
int main(){
int rows,cols,i,j;
int matrix [10][10];
printf("enter number of rows and columns : ");
scanf("%d %d",&rows,&cols);
printf("enter the elements of matrix:\n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&matrix[i][j]);

    }
}
printf("matrix  is : \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d",matrix[i][j]);
    }
    printf("\n");
    }
    return 0;
}
