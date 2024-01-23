#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i =0 ; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int arr[] , int low , int high)
{
    int i = low+1, j=high;
    int pivot = arr[low];
    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    int temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quickSort(int arr[], int low , int high)
{
    if(low<high)
    {
        int pivotIndex;
        pivotIndex = partition(arr,low,high);
        quickSort(arr , low , pivotIndex-1);
        quickSort(arr , pivotIndex+1 , high);
    }
}

int main()
{
    int arr[]= {5,7,3,2,4,9,7,5,6,3};
    print(arr,10);
    quickSort(arr , 0 , 10);
    print(arr,10);

}