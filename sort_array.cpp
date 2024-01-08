#include<iostream>
using namespace std;

bool sort( int arr[] , int n)
{
    if(n==1)
    {
        return true;
    }
    return ((arr[0]<arr[1]) && (sort(arr+1,n-1)));
}

int main()
{
    int n = 7;
    int arr[]={1,2,3,4,5,6,7};
    
    cout<<sort(arr , n);
}