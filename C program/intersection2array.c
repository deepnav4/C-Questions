#include <stdio.h>
int main(){
    int arr1[] = {3,6,6,9,10};
    int arr2[] = {2,4,6,9,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = size1 + size2;
    int arr3[size3];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else {
            arr3[k++] = arr1[i++];
            j++;
        };
    }
    for(int i=0; i<k; i++){
        printf("%d ",arr3[i]);
    }
}
