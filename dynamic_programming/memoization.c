#include <stdio.h>
#include <string.h>


int memoi[1000];
int climb(int n){
if (n <= 1){
    return 1;
}
if(memoi[n] != -1){
    return memoi[n];
} 
memoi[n] = climb(n-1) + climb(n-2);
return memoi[n];
}
int main(){
    int n = 10;
    memset(memoi , -1,sizeof(memoi));
    int result = climb(n);
    printf("%d",result);

}