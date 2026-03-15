#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        char name[100];
    
    public:
        //Default constructor
        Student(){
            rollNo=0;
            name[0]='\0';
        }

        void acceptFun()
        {
            cout<<"Enter roll no: ";
            cin>>this->rollNo;

            cout<<"Enter name: ";
            cin>>this->name;
        }
        
        void displayFun()
        {
            cout<<"Roll no: "<<this->rollNo<<" ";
            cout<<"Name: "<<this->name<<endl;
        }

        ~Student(){}
};

int main()
    {
        Student sds[10];
        int n, i;
        cout << "Enter Number of Student: ";
        cin >> n;
        
        for(i = 0; i < n; i++) {
        sds[i].acceptFun();
        }
        cout<<endl;
        cout << "Student Data - " << endl;
        
        for(i = 0; i < n; i++) {
        sds[i].displayFun();
        }
        return 0;
    }
    
