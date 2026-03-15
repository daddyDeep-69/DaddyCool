#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Salary
{
    private:
    int empno;
    string name;
    int sal;

    public:
    Salary(){}
    
    void accept(){
        cout<<"Enter Employee No: ";
        cin>>empno;
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee Salary: ";
        cin>>sal;
    }

    void display(){

        cout<<" Employee Details: "<<endl;
        cout<<"Employee No: "<<empno<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<sal<<endl;
    }

    static void sortA(Salary S[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(S[i].sal<S[j].sal){
                    Salary temp;
                    temp=S[i];
                    S[i]=S[j];
                    S[j]=temp;
                }
            }
        }
    }

    static void sortD(Salary S[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(S[i].sal>S[j].sal){
                    Salary temp;
                    temp=S[i];
                    S[i]=S[j];
                    S[j]=temp;
                }
            }
        }
    }
    ~Salary(){}
};
int main()
{
    int n;
    int c;
    cout<<"Enter Number of Employee: ";
    cin>>n;

    Salary S[n];
    for(int i=0;i<n;i++){
        S[i].accept();
    }
    cout<<"1.Sort Ascending\n 2.Sort Descending  ";
    cin>>c;
    if(c==1){    Salary::sortA(S,n);}
    else if(c==2){ Salary::sortD(S,n);}
    else{ cout<<"Invalid Choice";}
    
    for(int i=0;i<n;i++){
        S[i].display();
    }
    return 0;
}