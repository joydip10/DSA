#include<bits/stdc++.h>

using namespace std;

int fibonacchi(int num)
{
    if(num==0) return 0;
    else if(num==1) return 1;
    else{
        return fibonacchi(num-1)+fibonacchi(num-2);
    }
}

int main()
{
    cout<<fibonacchi(6)<<endl;
}
