//include all the neccesary libraries
#include<iostream>
using namespace std;

int max(int n1, int n2){

	if (n1>n2){
		return n1; //It is the maximum function
	}
	else {	
		return n2;
	}
}
int main(){
	
	int a,b;
	cout<<"Enter any 2 numbers"<<endl;
	cin>>a;
	cin>>b;

	int c=max(a,b);
		cout<<"Maximum of the 2 numbers is "<<c<<endl;//Calling the function by value
		cout<<"Thank You"<<endl;
	
	return 0;
}
