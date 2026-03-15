#include <iostream>
using namespace std;

/// Function for calculating Compound Interest 
double calAmount(double p,double r ,double t ){
	double base = 1 + (r/100);
	double result = 1 ;
	for(int i=1;i<=t;i++){
		result *= base;
	}
	return p*result;
}

int main(){
	double  p , r , t ; //p - Principle , r - Rate , t - Time 
	cout<<"Enter Principle , Rate , Time :\n";

	cin>>p>>r>>t;

	double a = calAmount(p,r,t);  ; //a -Total Amount
	
      	 cout<<"Total Amount with interest  is : "<<a<<endl;

      	 cout<<"Only Compound  Interest  is : "<<a-p<<endl;

	 return 0 ;
}
