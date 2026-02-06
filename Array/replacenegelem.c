#include <stdio.h>

int replacenegelem(int arr[],int size){
    int temp = 0;
    

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            temp = arr[i];
            arr[i] = 0;
          
        }
    }
    for(int i = 0; i <size; i++){
        printf("%d,",arr[i]);
    }
}

int main(){
int arr[] = {1,-2,3,-4};
int size = sizeof(arr)/sizeof(arr[0]);

replacenegelem(arr,size);


    return 0;
}