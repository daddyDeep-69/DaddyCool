#include<iostream>
using namespace std;

int findMax(int arr[], int n){
    int max = arr[0];

    for(int i=0; i<n; i++)
    {
        if (arr[i]>max) max = arr[i];
    }
    return max;
}

int findSMax(int arr[], int n, int max)
{
    int smax = 0;

    for(int i=0; i<n; i++)
    {
        if (arr[i]>smax && arr[i]!=max) smax = arr[i];
    }
    return smax;
}

int findMin(int arr[], int n){
    int min = arr[0];

    for(int i=0; i<n; i++)
    {
        if (arr[i]<min) min = arr[i];
    }
    return min;
}

int findSMin(int arr[], int n, int min, int max)
{
    int smin = max;

    for(int i=0; i<n; i++)
    {
        if (arr[i]<smin && arr[i]!=min) smin = arr[i];
    }
    return smin;
}

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<< " element: "<<endl;
        cin>>arr[i];
    }

    int result1 = findMax(arr, n);
    int result2 = findSMax(arr, n, result1);
    int result3 = findMin(arr, n);
    int result4 = findSMin(arr, n, result3, result1);

    cout<<"Max: "<<result1<<endl;
    cout<<"Second Max: "<<result2<<endl;
    cout<<"Min: "<<result3<<endl;
    cout<<"Second Min: "<<result4<<endl;

    return 0;
}