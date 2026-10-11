#include <stdio.h>
#include <string.h>



int min(int x,int y ,int z){
      return (x < y) ? (x < z ? x : z) : (y < z ? y : z); 
}
int distance(char *str1,char *str2,int m,int n){
    if(n == 0){
        return m;
    }
    if(m == 0){
        return n;
    }
    if(str1[m - 1] == str2[n - 1]){
        return distance(str1,str2,m - 1,n - 1);
    }
    return 1 + min(distance(str1,str2,m,n - 1),// insert
    distance(str1,str2,m - 1,n),// remove
    distance(str1,str2,m - 1,n - 1) // replace
);

}


int main(){

    char str1[] = "COMSCI";
    char str2[] = "COMICS";
    int size1 = strlen(str1);
    int size2 = strlen(str2);

    int result = distance(str1,str2,size1,size2);
    printf("%d",result);
    return 0;
}