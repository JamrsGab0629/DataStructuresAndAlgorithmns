#include <stdio.h>

int SmallestNum(int arr[],int size){
    int smallest;
    for(int i = 0; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
int arr[] = {3,5,2,4,6,7};
int size = sizeof(arr)/sizeof(arr[0]);

int result = SmallestNum(arr,size);

printf("%d",result);
}