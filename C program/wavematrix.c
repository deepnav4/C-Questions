#include <stdio.h>
// Row wise spiral matrix 
int main() {
    int rows1,columns1;
    printf("Enter a Number of Rows of Matrix 1 : ");
    scanf("%d",&rows1);
    printf("Enter a Number of Columns of MAtrix 1 : ");
    scanf("%d",&columns1);
    int arr1[rows1][columns1];
    printf("Enter the Elements of Matrix 1 : ");
    for(int i=0; i<rows1; i++){
        for(int j=0; j<columns1; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Your Matrix 1 : ");
    for(int i=0; i<rows1; i++){
        for(int j=0; j<columns1; j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("You Waved Matrix : ");
        for(int i=0; i<rows1; i++){
            if(i%2 == 0){
                for(int j=0; j<columns1; j++){
                    printf("%d ",arr1[i][j]);
                }
                printf("\n");
            }
            else{
                for(int j=columns1-1; j>=0; j--){
                    printf("%d ",arr1[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }


// Column wise spiral matrix
// Just replace i -> j and j -> i in printf loop 
