#include <iostream>
using namespace std;


int main(){
	int choice ;
	
	cout<<"1.Addition \t 2.Binary Addition \t 3.Character Addition \t 4.Exit";
	cout<<"\nEnter a Number : ";

	do{
		cin>>choice;
		
		switch(choice){
			case 1: {	
					cout<<"Addition of Two Numbers"<<endl;
					int num1,num2;
					cout<<"Enter Two Numbers: ";
					cin>>num1>>num2;
					cout<<"The Addition of Two numbers is: "<<num1+num2<<endl;

				}
				break;
			case 2:  {
					 cout<<"Binary Addition \n"<<endl;
					 int num1,num2;
					 cout<<"Enter Two Numbwers: ";
					 cin>>num1>>num2;

					 cout<<"Addition of binary numbers is:"<<((num1 | num2)+(num1 & num2))<<endl;
				 }

				break;
			case 3: {
					cout<<"Characters  Addition \n"<<endl;
					char ch1,ch2;
					cout<<"Enter Two Character for Addition :";
					cin>>ch1>>ch2;
					cout<<"Addition of the character is : "<<(char)(ch1+ch2)<<endl;	
				}

				break;
			case 4: 
				cout<<"Programm Exiting..."<<endl;
				break;
			default: 
				cout<<"Invalid Choice . Please try again !!"<<endl;
				break;
		}	

	}while(choice != 4);
	return 0;
} 
