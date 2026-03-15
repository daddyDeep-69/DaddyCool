#include<iostream>
using namespace std;

int checkCount(char arr[], int n, char x)
{   
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x) count+=1;
    } 

    return count;

}

int main(){

    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    char arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<< " element: "<<endl;
        cin>>arr[i];
    }

    char x;
    cout<<"Enter element to find: ";
    cin>>x;

    int result = checkCount(arr, n, x);

    cout<<"Count is: "<<result<<endl;

    return 0;
}