#include<iostream>
#include<cstring>
using namespace std;

class Donor
{
    private:
    int dn;
    char dname[100];
    char addr[100];
    int age;
    bool sex;
    char bg[10];

    public:

    void acceptData()
    {   
        
        char temp; 
        cout<<"Enter donor number: ";
        cin>>dn;
        cout<<"Enter donor name: ";
        cin>>dname;
        cout<<"Enter donor address: ";
        cin>>addr;
        cout<<"Enter donor age: ";
        cin>>age;
        cout<<"Enter donor sex (M/F): ";
        cin>>temp;
        if (temp=='M') sex = true;
        else if (temp=='F') sex = false;
        cout<<"Enter donor blood group: ";
        cin>>bg;
        cout<<endl;
    }

    static void displayO(Donor D[], int n)
    {
        for(int i=0; i<n; i++)
        {
            if (strcmp(D[i].bg, "O+") == 0)
            {
                cout<<"Donor number: "<<D[i].dn<<endl;
                cout<<"Donor name: "<<D[i].dname<<endl;
                cout<<"Donor address: "<<D[i].addr<<endl;
            }
            
        }
    }

    static void displayAge(Donor D[], int n)
    {
        for(int i=0; i<n; i++)
        {
            if (D[i].age>=18 && D[i].age<=25)
            {
                cout<<"Donor number: "<<D[i].dn<<endl;
                cout<<"Donor name: "<<D[i].dname<<endl;
                cout<<"Donor address: "<<D[i].addr<<endl;
            }
            
        }
    }

    static void display(Donor D[], int n)
    {
        for(int i=0; i<n; i++)
        {
            if (!D[i].sex && strcmp(D[i].bg, "A")==0 && D[i].age>=21 && D[i].age<=24)
            {
                cout<<"Donor number: "<<D[i].dn<<endl;
                cout<<"Donor name: "<<D[i].dname<<endl;
                cout<<"Donor address: "<<D[i].addr<<endl;
            }
            
        }
    }
};

int main()
{
    int n, choice;

    cout<<"Enter number of donors: ";
    cin>>n;

    Donor D[n];

    for(int i=0; i<n; i++)
    {
        D[i].acceptData();
    }

    do
    {
        cout<<"\tMenu"<<endl;
        cout<<"1. Donor with O+ blood group"<<endl;
        cout<<"2. Donor between age 18 to 25"<<endl;
        cout<<"3. Female donor having A blood group aged between 21 to 24"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            Donor::displayO(D, n);
            break;
        
        case 2:
            Donor::displayAge(D, n);
            break;

        case 3:
            Donor::display(D, n);
            break;

        case 4:
            cout<<"Exiting"<<endl;
            break;

        default:
            cout<<"Invalid choice. Try again :)"<<endl;
            break;
        }
    } while (choice!=4);
}