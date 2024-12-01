
#include <stdio.h>

int main() {
    int rows,columns;
    printf("Enter a Number of Rows : ");
    scanf("%d",&rows);
    printf("Enter a Number of Columns : ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the Elements of the Matrix : \n");
    for(int i=0 ;i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int minRow = 0;
    int maxRow = rows - 1;
    int minColumn = 0;
    int maxColumn = columns - 1;
    int totalElms = rows*columns;
    int count = 0;
    while(count < totalElms){
        for(int j=minColumn; j<=maxColumn && count<totalElms; j++){
            printf("%d ",arr[minRow][j]);
            count++;
        }
        minRow++;
        for(int i=minRow; i<=maxRow&& count<totalElms; i++){
            printf("%d ",arr[i][maxColumn]);
            count++;
        }
        maxColumn--;
        for(int j=maxColumn; j>=minColumn&& count<totalElms; j--){
            printf("%d ",arr[maxRow][j]);
            count++;
        }
        maxRow--;
        for(int i=maxRow; i>=minRow; i--){
            printf("%d ",arr[i][minColumn]);
            count++;
        }
        minColumn++;
    }
}// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int rows,columns;
    printf("Enter a Number of Rows : ");
    scanf("%d",&rows);
    printf("Enter a Number of Columns : ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the Elements of the Matrix : \n");
    for(int i=0 ;i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int minRow = 0;
    int maxRow = rows - 1;
    int minColumn = 0;
    int maxColumn = columns - 1;
    int totalElms = rows*columns;
    int count = 0;
    while(count < totalElms){
        for(int j=minColumn; j<=maxColumn && count<totalElms; j++){
            printf("%d ",arr[minRow][j]);
            count++;
        }
        minRow++;
        for(int i=minRow; i<=maxRow&& count<totalElms; i++){
            printf("%d ",arr[i][maxColumn]);
            count++;
        }
        maxColumn--;
        for(int j=maxColumn; j>=minColumn&& count<totalElms; j--){
            printf("%d ",arr[maxRow][j]);
            count++;
        }
        maxRow--;
        for(int i=maxRow; i>=minRow; i--){
            printf("%d ",arr[i][minColumn]);
            count++;
        }
        minColumn++;
    }
}
