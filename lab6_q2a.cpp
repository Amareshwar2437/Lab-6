//include all the neccesary libraries
#include<iostream>
using namespace std;
int sum(int n1,int n2){

	int s=n1+n2; //It is the sum function
	return s;
}
int main(){
	int a,b;
	cout<<"Enter any 2 numbers"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Add the 2 numbers"<<endl;

	int c=sum(a,b);//Calling the function by value
		cout<<"Sum of the two numbers is" <<c<<endl;
		cout<<"Thank You"<<endl;
	return 0;
}
