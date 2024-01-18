#include<iostream>
using namespace std;

void reverse1(string s, int index)
{
    if(index == s.length())
    {
        return;
    }
    reverse1(s,index+1);
    cout<<s[index];
}

void reverse2(string s , int index){
    if(index==0)
    {
        cout<<s[0];
        return;
    }
    cout<<s[index];
    reverse2(s,index-1);
}

void reverse3(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string sub = s.substr(1);
    reverse3(sub);
    cout<<s[0];
}

int main()
{
    
    reverse1("bilal",0);
    cout<<endl;
    reverse2("bilal",4);
    cout<<endl;
    reverse3("bilal");
    return 0;
}