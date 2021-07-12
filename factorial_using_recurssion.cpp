#include<bits/stdc++.h>

using namespace std;
int func(int n ){
    if(n>0){
    return func(n-1)*n;
    }
    else return 1;
}

int main(){
    cout<<func(5)<<endl;
    return 0;
}
