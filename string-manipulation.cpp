#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    char name[10]="koyel";
    for(int i=0;i<strlen(name);i++){
        //str=str+name[i];
        str.push_back(name[i]);
    }
    char name_cfs[10];
    strcpy(name_cfs,str.c_str());
    //cout<<name_cfs<<endl;
    //cout<<str.size()<<endl;

    //char ch=(char)65;
    //cout<<ch;

    int ascii=(int)' ';
    cout<<ascii<<endl;
}
