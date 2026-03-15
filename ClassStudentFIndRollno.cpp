#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    private:
    int rollNo;
    char name[10];
    char course[10];

    public:
    Student()
    {
        rollNo = 0;
        name[0]='\0';
        course[0]='\0';
    }

    Student(int rollNo, const char name[10], const char course[10]){
        this->rollNo = rollNo;
        strcpy(this->name,name);
        strcpy(this->course,course);
    }

    void acceptData()
    {
        cout<<"Enter Roll No: ";
        cin>>rollNo;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Course: ";
        cin>>course;
    }

    void displayData()
    {
        cout<<endl;
        cout<<"Roll No: "<<rollNo<<"\nName: "<<name<<"\nCourse: "<<course<<endl;
    }

    void findFun()
    {
        cout<<"Roll no: "<<this->rollNo<<" ";
        cout<<"Name: "<<this->name<<" ";
        cout<<"Course: "<<this->course<<endl;

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

    for(int i=0;i<n;i++){
        s[i].displayData();
    }

    int tofind;
    cout<<"Enter roll no to find student: ";
    cin>>tofind;

    s[tofind-1].findFun();


    return 0;
}