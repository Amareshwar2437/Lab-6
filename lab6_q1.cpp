//include all necessary libraries
#include<iostream>
using namespace std;

//Ask the user to type a function from user and returns a value for unitCst, units and taxRate

void task1(int &a, int &b, int &c)
	{
	cout<<"Please enter the value of units"<<endl;
	cin >> a;
	cout <<"Please enter the value of unit costs"<<endl;
	cin >> b;
	cout <<"Please enter the value of the unit rate"<<endl;
	cin >> c;
	}
//Now we have to write a function that receives the values for a,b,c and hence, calculates the sales tax and total dues

void task2(int a, int b, int c, int &salestax, int &totaldue){
//Ask the user to give the functions for calculation of sales tax and total due

	salestax =a*b*c;
	totaldue =salestax+(a*b);
					}
void task3(int a, int b, int c, int salestax, int totaldue){
	
	cout <<"No. of units = "<<a<<endl;
	cout <<"The unit cost = "<<b<<endl;
	cout <<"The unit rate = "<<c<<endl;
	cout <<"The total sales tax = "<<salestax<<endl;
	cout <<"The total dues = "<<totaldue<<endl;
							}
//Now declaring the int main function

	int main(){
		int a,b,c,salestax,totaldue;
	task1(a,b,c);
	task2(a,b,c,salestax,totaldue);
	task3(a,b,c,salestax,totaldue);
	
return 0;
}	

