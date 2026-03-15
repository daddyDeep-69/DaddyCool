#include <iostream>
using namespace std;

// Recursive Fibonacci Series 
int fibonacciRecursive(int num){
	if(num == 1)return 0;
	if(num==2)return 1; 
	return fibonacciRecursive(num-1)+fibonacciRecursive(num-2);
}

int main(){
	int number ;

	cout<<"Enter a number : ";
	cin>>number;
	
	for(int i=1; i<=number ; i++){
		cout<<fibonacciRecursive(i)<<" "<<endl;
	}

	return 0;
}
