#include <stdio.h>

int Binarysearch(int arr[],int target,int size,int low ,int high){
    
    while(low <= high){
    int mid = (low + high) / 2;

    if(arr[mid] == target){
        return mid;

    }else if(arr[mid] < target){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
}
}
int main(){

    int arr[] = {1,2,3,4,5};
    int target = 5;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = Binarysearch(arr,target,size,0,size);

    printf("target is at index = %d",result);


}