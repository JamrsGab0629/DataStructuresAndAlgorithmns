#include <stdio.h>
#include <limits.h>
int bigdiffrence(int arr[],int size){
    int smallest = INT_MIN;
    for(int i = 0; i <size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
 int bigdiffrence = 0;
     int minsofar = 0;
    for(int j = 0; j < size; j++){
        if(arr[j] > smallest && bigdiffrence)
    }
}
int main(){

}