#include<bits/stdc++.h>

using namespace std;
int power(int n,int m)
{
    if(m>1)
    {
        return power(n,m-1)*n;
    }
    else
    {
        return n;
    }
}

int factorial(int n)
{
    if(n>1)
    {
        return factorial(n-1)*n;
    }
    else return 1;
}

float taylor(int n,int m)
{
    if(m>0)
    {
        return (taylor(n,m-1)+((pow(n,m))/factorial(m)));
    }
    else
    {
        return 1;
    }
}

int main()
{
    cout<<taylor(3,4);
}
