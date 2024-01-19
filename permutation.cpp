#include<iostream>
using namespace std;
void permutation(string str , string newStr)
{
    if(str.length()==0)
    {
        cout<<newStr<<endl;
        return;
    }
    for(int i = 0 ; i<str.length();i++)
    {
        char c = str[i];
        string subStr = str.substr(0,i)+str.substr(i+1);
        permutation(subStr,c+newStr);
    }
}
int main()
{
    permutation("abc","");
}