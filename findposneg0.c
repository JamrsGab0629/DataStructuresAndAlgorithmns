#include <stdio.h>

int count(int arr[],int size){
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            positive += 1;
        }
        else if(arr[i] < 0){
            negative += 1;
        }
        else if(arr[i] == 0){
            zero += 1;
        }
    }
    printf("%d,%d,%d",positive,negative,zero);
}
int main(){
int arr[] = {1,-2,0,4,-5};
int size = sizeof(arr)/sizeof(arr[0]);

count(arr,size);
    return 0;
}