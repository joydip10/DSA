#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int total=0;
    if(n>0){
        return func(n-1)+n;
    }
    else return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}
