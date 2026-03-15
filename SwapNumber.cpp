#include <iostream>
using namespace std;

void swapNum(int x, int y){
	x =  x + y ;
	y =  x - y ;
	x =  x - y ;

	cout<<"After Swapping : "<<"num1"<<" = "<<x<<" & "<<"num2"<<" = "<<y<<endl;
}

int main(){
	int num1 , num2 ;
	cout<<"Enter Two numbers for swapping : \n";

	cin>>num1>>num2;

	cout<<"Before Swapping : "<<"num1"<<" = "<<num1<<" & "<<"num2"<<" = "<<num2<<endl;
	swapNum(num1,num2);

	return 0;
}
