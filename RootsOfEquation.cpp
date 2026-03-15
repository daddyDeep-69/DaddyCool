#include<iostream>
#include<cmath>
using namespace std;

void findRoots(int a,int b, int c){
	int d,r1,r2;
	d= (b*b)-(4*a*c);
	r1=((-b+(sqrt(d)))/2*a);
	r2=((-b-(sqrt(d)))/2*a);
	cout<<r1<<endl<<r2<<endl;
	}
int main(){
	int a,b,c;
	cout<<"Enter a,b,c";
	cin>>a>>b>>c;
	findRoots(a,b,c);
	return 0;}
