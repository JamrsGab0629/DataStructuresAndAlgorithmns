#include <stdio.h>

int Linearsearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return target;
        }
    }
}
int main(){
 int arr[] = {1,2,3,4,5};
    int target = 5;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = Linearsearch(arr,size - 1,target);

    printf("target is at index = %d",result);
}