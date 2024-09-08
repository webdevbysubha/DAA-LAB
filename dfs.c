#include<stdio.h>
#include<stdlib.h>

void dfs(int v,int n,int arr[][n]){
    static int vis[10]={0};
    int i;
    printf("%d ",v);
    vis[v]=1;
    for(i=0;i<n;i++){
        if(arr[v][i]==1 && vis[i]==0){
            dfs(i,n,arr);
        }
    }
}

int main(){
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the adjacency matrix: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("DFS traversal: ");
    dfs(0,n,arr);
    return 0;
}