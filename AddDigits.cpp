
#include<iostream>
using namespace std;

/*int addDigit(int num){
	int add =  0 ;
	if(num==0)
		return 0;
	
	add = add + num%10;
	num/= 10;
	return add;
}
*/ 

int addDigits(int x){
	if(x == 0) return 0;
	
	return (x%10) +  addDigits(x/10);
}

int main(){
	int num;
	cout<<"Enter four digit number: ";
	cin>>num;
//	int sum = addDigit(num);
	
	int result=addDigits(num);
	cout<<"Addition of numbers using recursion  : "<<result<<endl;
	return 0;
}
