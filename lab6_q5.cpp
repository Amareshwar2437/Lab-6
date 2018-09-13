//include all the neccesary libraries
#include<iostream>
using namespace std;
int sum(int n1,int n2){

	int s=n1+n2; //It is the sum function
	return s;
}

int max(int n1, int n2){

	if (n1>n2){
		return n1; //It is the maximum function
	}
	else {	
		return n2;
	}
}

int min(int n1, int n2){

	if (n1<n2){
		return n1; //It is the minimum function
	}
	
	else {
		return n2;
	}
}

int main(){
		int d,a,b;
	cout<<"Enter any 2 numbers"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Ask the user if he wants to see the sum, or wants to know the maximum of the 2 numbers or the minimum of the 2 numbers"<<endl;
  	cout<<"For sum enter 1, For knowing maximum of the 2 numbers enter 2 and For knowing minimum of the 2 numbers enter 3"<<endl;

	cin >> d;
	if (d ==1){
			int c=sum(a,b);//Calling the function by value
			cout<<"Sum of the two numbers is" <<c<<endl;
			cout<<"Thank You"<<endl;
	}
	else if (d ==2){
			int c=max(a,b);
			cout<<"Maximum of the 2 numbers is "<<c<<endl;//Calling the function by value
			cout<<"Thank You"<<endl;
	}
	else{
			int c=min(a,b);
			cout<<"Minimum of the 2 numbers is" <<c<<endl;//Calling the function by value
			cout<<"Thank You"<<endl;
	}
	return 0;
}
