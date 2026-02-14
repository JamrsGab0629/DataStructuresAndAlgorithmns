#include <stdio.h>
int memoi[1000];
int fact(int n){

int dp[n];
dp[0] = 1;

for(int i = 1; i <= n; i++){
    dp[i] = i * dp[i - 1];
}
return dp[n];

}
int memo(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    if(memoi[n] != 0){
        return memoi[n];
    }

    memoi[n] = n * memo(n - 1);
    return memoi[n];
}
int main(){

int n = 2;
int result = fact(n);

printf("%d\n",result);
printf("%d",memo(n));
    return 0;
}