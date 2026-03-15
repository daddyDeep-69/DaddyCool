#include<iostream>
#include<string>
#include<cstring>
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

string strPrint(char arr[], int n)
{
    string str;

    str.append(arr);

    return str;
}

double avgFun(int arr[], int n)
{
double sum = 0;

for(int i=0; i<n; i++)
{
sum += arr[i];
}
double avg= sum/n;
return avg;
}

void displayAvg(double average){
    cout<<"The average of the given numbers is : "<<average<<endl;
}

void multiple(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i]*2;
    }
}

int main()
{
    int choice;

    do
    {
        cout<<endl<<"-:Menu:-"<<endl;
        cout<<"1. Sort numerical array"<<endl;
        cout<<"2. To print character array as string"<<endl;
        cout<<"3. To calculate average of given array"<<endl;
        cout<<"4. To multiply array by 2"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            { 
                int n;
                cout<<"Enter the size of character array: ";
                cin>>n;
                int *arr= new int[n];
            
                for(int i=0;i<n;i++){
                    cout<<"Enter a character array: ";
                    cin>>arr[i];
                }
                sortFun(arr,n);
                displayFun(arr,n);
                
                delete[] arr;
                break;
            }

            case 2: 
            {
                int n;
                cout<<"Enter the size of character array: ";
                cin>>n;
                char *carr= new char[n];

                for(int i=0;i<n;i++){
                    cout<<"Enter a character array: ";
                    cin>>carr[i];
                } 

                string result = strPrint(carr, n);

                cout<<result<<endl;
                
                delete[] carr;
                break;
            }

            case 3:
            {
                int n;
                cout<<"Enter Array size: ";
                cin>>n;
                int arr[n];
                for(int i=0; i<n; i++)
                {
                cout<<"Enter "<<i+1<< " elements: "<<endl;
                cin>>arr[i];
                }
                double average= avgFun(arr, n);
                displayAvg(average);

                break;
            }

            case 4:
            {
                int n;
                cout<<"Enter Array size: ";
                cin>>n;
                int arr[n];
                for(int i=0; i<n; i++)
                {
                    cout<<"Enter "<<i+1<< " Elements: "<<endl;
                    cin>>arr[i];
                }   

                multiple(arr,n);

                displayFun(arr,n);
                break;
            }

            case 5:
                cout<<"Exited Successfully"<<endl;
                break;

            default:
                cout<<"Invalid choice enter again!"<<endl;
                break;

        }
    } while (choice!=5);
    
}