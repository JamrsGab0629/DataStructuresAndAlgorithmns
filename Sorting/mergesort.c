#include <stdio.h>
#include <stdlib.h>

void mergesort(int arr[],int temp[],int left,int mid,int right){
    int i = left,j = mid + 1 ,k = left;

    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(i = left; i <= right; i++){
        arr[i] = temp[i];
    }
}
void merge(int arr[],int temp[],int left,int right){
    if(left < right){
        int mid = left + (right - left) / 2;

        merge(arr,temp,left,mid);
        merge(arr,temp,mid + 1,right);
        mergesort(arr,temp,left,mid,right);
    }
}
int main(){
int arr[] = {5,6,1,3,4};
int size = sizeof(arr)/sizeof(arr[0]);
int *temp = malloc(size * sizeof(int));

merge(arr,temp,0,size - 1);


for(int i = 0; i <size; i++){
    printf("%d",arr[i]);
}
}