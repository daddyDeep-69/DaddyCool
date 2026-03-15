#include <iostream>
using namespace std;

void decToBinary(int number){
	if(number == 1 ) {
		cout<<number;
		return ;
	}

	decToBinary(number/2);

	cout<<" "<<number%2;
}

int main(){
	int number , result ; 
	cout<<"Enter a Number : ";
	cin>>number;
	decToBinary(number);
	cout<<endl;
	return 0 ; 	
}
