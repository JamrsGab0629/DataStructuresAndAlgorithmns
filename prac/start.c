#include <stdio.h>

void bubblesort(int arr[],int size){
    
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
              int temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
            }

        }
    }
    
}

int main(){
   
    int number[] = {10,11,12,14};
    int size = sizeof(number)/sizeof(number[0]);


    bubblesort(number,size);
   
   for(int i = 0; i < size; i++){
    printf("%d",number[i]);
   }
   return 0;
}

