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
    int c;
    while(1){
        printf("1. DFS\n2. BFS\n3. Exit\nEnter your choice: ");
        scanf("%d", &c);
        switch(c){
            case 1:
                printf("DFS traversal: ");
                dfs(0,n,arr);
                printf("\n");
                break;
            case 2:
                printf("BFS traversal: ");
                bfs(0,n,arr);
                printf("\n");
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}