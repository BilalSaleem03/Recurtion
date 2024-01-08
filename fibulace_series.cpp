#include<iostream>
using namespace std;

int fibulance(int n)
{
    if((n==0) || (n==1))
    {
        return n;
    }
    return fibulance(n-1) + fibulance(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibulance(n);
}