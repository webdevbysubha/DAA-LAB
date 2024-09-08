#include<stdio.h>
#include<stdlib.h>

void bfs(int v,int n,int arr[][n]){
    int vis[n];
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
    vis[v]=1;
    int q[n],f=0,r=0;
    q[r++]=v;
    while(f!=r){
        int x=q[f++];
        printf("%d ", x);
        for(int i=0;i<n;i++){
            if(arr[x][i]==1 && vis[i]==0){
                q[r++]=i;
                vis[i]=1;
            }
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
    printf("BFS traversal: ");
    bfs(0,n,arr);
    return 0;
}