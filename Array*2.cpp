#include<iostream>
using namespace std;

void multiple(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i]*2;
    }


}

void displayFun(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    
    cout<<"Array size: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<< " element: "<<endl;
        cin>>arr[i];
    }

    multiple(arr,n);
    displayFun(arr,n);
    
    return 0;
}