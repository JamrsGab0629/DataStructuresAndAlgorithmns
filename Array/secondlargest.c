#include <stdio.h>
#include <limits.h>
int secondlargest(int arr[],int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int secondlargest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] != max && arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main(){
    int arr[] = {10,5,20,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = secondlargest(arr,size);

    printf("%d",result);

}