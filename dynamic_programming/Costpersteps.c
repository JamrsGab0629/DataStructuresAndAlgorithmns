#include <stdio.h>

int min(int a,int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
int costclimb(int n){
    int cost[] = {10,15,20};

    
    int dp[n];

    dp[0] = 0;
    dp[1] = cost[0];
    

    for(int i = 2; i <= n; i++){
        dp[i] = min(dp[i - 1] + cost[i - 1],dp[i - 2] + cost[i - 2]);
    }
    return dp[n];
}
int main(){
    int n = 5;
int result = costclimb(n);
printf("%d",result);
}