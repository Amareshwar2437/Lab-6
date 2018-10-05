//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.
//Include all necessary libraries
#include<iostream>
using namespace std;

char toUpper(char a)			//Programme to find Uppercase Letters
{
	int x,y;
	x=int(a);
	y=char(x-32);
	return y;
}

char toLower(char a)			//Programme to find Lowercase Letters
{
	int x,y;
	x=int(a);
	y=char(x+32);
	return y;
}

int main(){
		char a;int x;					//Main function calling by value
	cout<<"Please enter any desired letter"<<endl;	
	cin>>a;
	x=int(a);

	if(x>=97 & x<=122){
	
				cout<<"The letter in Uppercase is:"<<toUpper(a)<<endl;
											}
	else if (x>=65 & x<=90) {
				cout<<"The letter in Lowercase is:"<<toLower(a)<<endl;

											}
 	else {

	cout<<"Boom!! Bekaar INPUT, Nikal Yaahanse"<<endl;}
	return 0;
}

