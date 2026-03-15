#include <iostream>
using namespace std;

/// Brute Force Approach 

/*void runningSum(int terms){
	int temp = 0 ;
	for(int i = 1 ; i <= terms ; i++){
		temp += i;
		cout<<"\t\t"<<temp<<endl;
	}
	cout<<endl<<endl;
}
*/

/// Recursive Approach 
int runningSumRecursion(int terms){
	if(terms == 1) return 1;
	return terms + runningSumRecursion(terms-1);
}

int main(){
	int terms ;
	cout<<"\n\t *********************************** \n";
       	cout<<"\tEnter a number :  ";
	cin>>terms;
	
	int total = 0 ;

	for(int i=1;i<=terms;i++){
		int result = runningSumRecursion(i);
		cout<<"\tRunning sum of "<<i<<" is : "<<result<<endl;
		total += result;
	}

	cout<<"Total Sum Of Running Sum of n Numbers is : "<<total<<endl;
	return 0;
}
