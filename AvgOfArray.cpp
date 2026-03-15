#include<iostream>
using namespace std;

int avgFun(int arr[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    return sum/n;
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

    int result = avgFun(arr, n);

    cout<<"Average of the given array is: "<<result<<endl;

    return 0;
}