#include<stdio.h>
#include<stdlib.h>

int min(int a, int b){
    return a<b?a:b;
}

int tsp(){

}

void path(){

}

int main(){
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the cost matrix: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int dp[n][1<<n];
    for(int i=0; i<n; i++){
        for(int j=0; j<(1<<n); j++){
            dp[i][j]=-1;
        }
    }
    int min=tsp(arr,n,dp);
    printf("Minimum cost: %d\n", min);
    path(n,dp);
    return 0;
}