    #include <stdio.h>
    void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;

        
    }
    int main(){
int h = 10;
int j = 5;
printf("%d,%d\n",h,j);
swap(&h,&j);
printf("%d,%d",h,j);
    }

