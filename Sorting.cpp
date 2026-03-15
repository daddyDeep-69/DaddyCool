#include<iostream>
using namespace std;

void sortFun(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        int temp;

        for(int j=0; j<n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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

    sortFun(arr, n);
    displayFun(arr, n);


    return 0;
}