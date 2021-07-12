#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
stack<int> copyy(stack<int>s){
    stack<int>t;
    for(int i =0;i<s.size();i++){
        t.push(s.top());
        s.pop();
    }
    return t;
}
int main()
{
    stack<int> s;
    for(int i =0;i<10;i++){
        int num;
        cin>>num;
        s.push(num);
    }
    stack<int>n_stack;
    n_stack=copyy(s);
    cout<<n_stack.top()<<endl;
}


