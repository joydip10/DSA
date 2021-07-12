#include<bits/stdc++.h>

using namespace std;

int func(int num,int n)
{
    if(n>1){
        return func(num,n-1)*num;
    }
    else if(n==1){
        return num;
    }
    else{
        return -1;
    }
}

int main()
{
    cout<<func(5,2)<<endl;
}
