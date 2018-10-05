//Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
//Include all necessary libraries
#include <iostream>
using namespace std;


//to find minimum of the two provided numbers
//First define the function of comparison of the two functions

void minimum(int n1, int n2, int &min)
{

	//Now put the necessary conditions so as to find the minimum between the two numbers

	if (n1<n2)
	{
		min=n1;
	}
	else if (n2<n1)
	{
		min=n2;
	}
	else 
	cout<<"Minimum of the 2 numbers is not defined Sir"<<endl;

}

int main(){

	//Ask the user for the required values of n1, n2
	//Use the cin function to ask the user the desired numbers from the terminal itself

	int n1, n2;
	cout<<"Please enters any 2 numbers sir:"<<endl;
	cin>>n1>>n2;
	int min=0;
//Need to find the minimum of the 2 numbers
	
	minimum(n1,n2, min);
	
//Please give the output of the minimum of the 2 numbers

	cout <<"The minimum of the two numbers is "<<min<<endl;
	
	return 0;
}
