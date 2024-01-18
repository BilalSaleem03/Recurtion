#include<iostream>
using namespace std;
void permutation(string str,string newstr)
{
    if(str.length()==0)
    {
        cout<<newstr<<endl;
        return;
    }
    for (int i = 0 ; i<str.length() ; i++)
    {
        char c = str[i];
        string sub = str.substr(0,i)+ str.substr(i+1);
        permutation(sub,newstr+c);
    }
    
    
}
int main()
{
    permutation("abc","");
}