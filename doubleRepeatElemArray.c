#include <stdio.h>
#include<math.h>

int main(){
    int arr[] = {2,3,4,4,5,6,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int duplicateFnd = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                printf("%d ",arr[i]);
                duplicateFnd = 1;
                break;
            }
        }
    }
    if(!duplicateFnd) printf("None");
}
