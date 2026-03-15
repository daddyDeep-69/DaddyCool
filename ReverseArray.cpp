#include<iostream>
using namespace std;

void reverseRecurFun(char arr[], int i,int j){
    
    if(i>=j)
        return ;
    char temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

    reverseRecurFun(arr,i+1,j-1);
}
int main(){
    int n;
    cout<<"Enter the size of character array: ";
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter a character array: ";
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    reverseRecurFun(arr,i,j);
    cout<<"The Reversed Array is: ";
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    cout<<endl;
    return 0;
}