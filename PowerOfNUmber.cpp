#include <iostream>
using namespace std;

int main(){
	int num , power ; 
	cout<<"Enter Number :\n" ;
	cin>>num;

	cout<<"Enter Power : \n";
	cin>>power;
	int ans;

	for(int i=0;i<power;i++){
		ans = num * num;
	}
	
	cout<<"Power of the given number is : "<<ans<<endl;

	return 0;
}
