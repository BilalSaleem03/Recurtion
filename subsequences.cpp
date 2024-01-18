#include<iostream>
using namespace std;
void subsequences(string str , int index ,string newstr)
{
    if(index == str.length())
    {
        cout<<newstr<<endl;
        return;
    }
    char c = str[index];
    subsequences(str , index+1,newstr+c);
    subsequences(str , index+1,newstr);
    
    
}
int main()
{
    subsequences("abc",0,"");
}