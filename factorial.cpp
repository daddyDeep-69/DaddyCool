#include <iostream>
using namespace std;

// Printing factorial 
void printFactorial(int num){
	int x = 1;
	for(int i=1;i<=num;i++){
		x *= i;
		cout<<"\t"<<x<<endl;
	}
}

int factorialSeries(int num){
	if(num == 1)return 1;

	return num * factorialSeries(num-1);
}

int main(){
	int num ; 
	cout<<"Enter a Number : ";
	cin>>num;

	printFactorial(num);
	
	return 0;
}
