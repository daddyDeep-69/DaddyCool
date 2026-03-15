#include<iostream>
#include<cstring>
using namespace std;
class Time{
    private:
        int hr;
        int min;
        int sec;
    public:
        //Default constructor
        Time(){
            hr=0;
            min=0;
            sec=0;
        }
        //Parameterised Constructor
        Time(int h,int m, int s){
            hr=h;
            min=m;
            sec=s;
        }

        Time operator-(Time t1){
            Time temp;
            temp.hr=this->hr-t1.hr;
            temp.min=this->min-t1.min;
            temp.sec=this->sec-t1.sec;
            return temp;
        }

        void operator < (Time t1){
            if (this->hr==t1.hr && this->min==t1.min && this->sec==t1.sec) cout<<"Time is same"<<endl;

            else cout<<"Time is not same"<<endl;
        }

        void display()
        {
            cout<<"hr: "<<this->hr<<" min: "<<this->min<<" sec: "<<this->sec<<endl;
        }

        ~Time() {}
};

int main()
{
    Time t1(3, 8, 5);
    Time t2(2, 4, 3);
    Time t3;
    
    cout<<"Time 1:";
    t1.display();
    cout<<endl;
    cout<<"Time 2:";
    t2.display();
    cout<<endl;

    t3 = t1 - t2;
    t3.display();

    t1 < t2;
    

    return 0;
}
