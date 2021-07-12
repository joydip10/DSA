#include <bits/stdc++.h>
using namespace std;
int max_size=0;
int getgraph(int n)
{
    vector<int> graph[10002] ;
    int p = n;
    for(int i =1;i<=p;i++)
    {
      int u , v;
      cin>>u>>v;
      graph[u].push_back(v);
      graph[v].push_back(u);
      int vec_size = graph[i].size();
      max_size = max(vec_size,max_size);
    }
    return max_size;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    if(test>10) {
       return 0;
    }
    int n;
    for(int i =1;i<=test;i++)
    {
        cin>>n;

        cout<<"Case "<<i<<": "<<getgraph(n)<<endl;
        max_size = 0;
    }
    return 0;
}
