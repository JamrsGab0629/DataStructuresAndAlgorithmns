#include <stdio.h>

void selection(int arr[],int size){
 
    for(int i = 0; i < size - 1; i++){
        int minimumval = i;
        for(int j = i + 1; j < size; j++){
if (arr[j] < arr[minimumval]){
    minimumval = j;
}
    }
    int temp = arr[i];
    arr[i] = arr[minimumval];
    arr[minimumval] = temp;
}

}
int main(){
int arr[] = {5,2,9,1,7};
int size = sizeof(arr)/sizeof(arr[0]);

selection(arr,size);

for(int i = 0; i < size; i++){
    printf("%d",arr[i]);
}
}