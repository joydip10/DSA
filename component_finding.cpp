#include<iostream>
#include<stdio.h>
#include<memory.h>
#include<vector>
using namespace std;
int visited[100];
int graph[100][100];
int check = 0;
void g(int n){
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++){
            cin>>graph[i][j];
        }
    }
}
void DFS(int i,int n)
{
    //printf("%d ",i);
    visited[i]=1;
    for(int j=1;j<=n;j++){
            if(graph[i][j]==1 && visited[j]== 0){
                DFS(j,n);
            }
    }
}
void check_component(int n,int s)
{
    DFS(s,n);
    for(int i =1;i<=n;i++){
        if(!visited[i]){
            check++;
            DFS(i,n);
        }
    }
    cout<<"Connected components: "<<check+1<<endl;
}
int main()
{
    g(6);
    check_component(6,1);

}
