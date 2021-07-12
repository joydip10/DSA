#include<iostream>
#include<vector>
#include<stack>
#define N 100
using namespace std;
vector<int> adjList[N];
int visited[N];

void dfsstack(int u)
{
    stack<int> nstack;
    visited[u] = 1;
    nstack.push(u);
    while(!nstack.empty())
    {
        int tp = nstack.top();
        cout<<tp<<" ";
        nstack.pop();
        for(int i=0;i<adjList[tp].size();i++)
        {
            if(!visited[adjList[tp][i]])
            {
                nstack.push(adjList[tp][i]);
                visited[adjList[tp][i]] = 1;
                //visited that node, the time has come :)
            }
        }
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
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    dfsstack(0);
}
