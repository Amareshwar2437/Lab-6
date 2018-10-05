//Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.
//Include all necessary libraries

#include <iostream>
using namespace std;
	//we have to define the addition function first

	void add(int n1, int n2, int &sum)
	//Adding the two numbers

	{
		sum= n1+n2;
	}

int main()
{

	//Ask the user to input two numbers
	
	int n1, n2;
	
	cout<<"Please enter any 2 numbers:"<<endl;
	cin>> n1>>n2;
	int sum=0;
	
	//Ask user to add the 2 numbers
	
	add(n1 , n2, sum);
	//Display the output
	cout<<"The sum of the two numbers is:"<<sum<<endl;

	return 0;
}
