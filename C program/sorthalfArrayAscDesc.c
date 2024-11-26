#include <stdio.h>
#include<math.h>

int main(){
    int arr[] = {4,3,5,6,2,4,24,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mid = size/2;
    for(int i=0; i<mid; i++){
        for(int j=i+1; j<mid; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
            }
        }
    }
    for(int i=mid; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]<arr[j]){
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
            }
        }
    }
    
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
