#include<iostream>
#include<vector>
#define Max 100
bool seen[100];
using namespace std;
vector<int> graph[Max];
void dfs(int n)
{
    seen[n] = true;
    cout<<n<<" ";
    for(int i =0;i<graph[n].size();i++)
    {
        int v = graph[n][i];
        if(!seen[v]) dfs(v);
    }
}
void dfs_after()
{
    for(int i = 0;i<100;i++)
    {
        seen[i]=false;
    }
}
int main()
{

    int nodes,edges;
    cout<<"number of nodes: ";
    cin>>nodes;
    cout<<"number of edges: ";
    cin>>edges;
    for(int i = 0;i<edges;i++)
    {
        int a,b;
        cout<<"Enter the connected nodes: ";
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 1; i <= nodes; i++)
    {
        cout<<"\n"<<graph[i].size()<<" no. of node(s) is/are connected with "<<i<<" node"<<endl;
        cout<<"Nodes connected to "<<i<<": ";
        for(int j = 0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
    }
    cout<<endl<<"DFS: ";
    dfs(0);
    dfs_after();
    cout<<endl;
    /*dfs(2);
    dfs_after();
    dfs(4);
    dfs_after();*/

}
