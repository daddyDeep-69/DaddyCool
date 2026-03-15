#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Student
{
    private:
    int rollNo;
    string name;

    public:
    Student()
    {
        rollNo = 0;
        name="";
    }

    Student(int rollNo, const string name){
        this->rollNo = rollNo;
        this->name=name;
        
    }

    void acceptData()
    {
        cout<<"Enter Roll No: ";
        cin>>rollNo;
        cout<<"Enter Name: ";
        cin>>name;
       
    }

    void displayData()
    {
        
        
        cout<<"Roll No: "<<rollNo<<"\nName: "<<name<<endl;
    }

    ~Student(){}
};

int main()
{
    int n;
    cout<<"Enter the Number of Students: ";
    cin>>n;


    Student *s= new Student[n];

    for(int i=0;i<n;i++){
        s[i].acceptData();
    }
    cout<<endl;
    cout<<"Student Details: "<<endl;

    for(int i=0;i<n;i++){
        s[i].displayData();
    }

    return 0;
}