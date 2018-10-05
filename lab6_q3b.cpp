//Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
//Include all the necessary libraries
#include <iostream>
using namespace std;

//to find maximum of two numbers by call by reference
//First define the function of comparison of the two functions

void maximum(int n1, int n2, int &max)
{

	//Now put the necessary conditions so as to find the maximum between the two numbers

	if (n1>n2)
	{
		max=n1;
	}
	else if (n2>n1)
	{
		max=n2;
	}
	else 
	cout<<"Maximum of the 2 numbers is not defined Sir"<<endl;

}

int main(){

	//Ask the user for the required values of n1, n2
	//Use the cin function to ask the user the desired numbers from the terminal itself

	int n1, n2;
	cout<<"Please enters any 2 numbers sir:"<<endl;
	cin>>n1>>n2;
	int max=0;
//Need to find the maximum of the 2 numbers
	
	maximum(n1,n2, max);
	
//Please give the output of the maximum of the 2 numbers

	cout <<"The maximum of the two numbers is "<<max<<endl;
	
	return 0;
}
