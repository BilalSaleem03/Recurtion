#include<iostream>
using  namespace std;

void towerOfHanoi(int n , string sorce , string helper , string destination)
{
    if(n==1)
    {
        cout<<"Disk "<<n<<" transfer from "<<sorce<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1 , sorce ,destination, helper);
    cout<<"Disk "<<n<<" transfer from "<<sorce<<" to "<<destination<<endl;    
    towerOfHanoi(n-1 , helper, sorce ,destination);

}

int main()
{
    int n =4;
    towerOfHanoi(n , "S","H","D");
}