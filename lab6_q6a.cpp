//Write a function that outputs the sum of all even numbers between firstNum and secondNum. 
//Include all necessary libraries
#include <iostream>
using namespace std;

int evensum(int firstnum, int secondnum)
{
	int sum=0;
//We need to give output of all even numbers between 2 numbers
//Performing the operation

	for( int a=firstnum+1;a<secondnum; a++)
	
	{
		if(a%2==0)
		{
			sum+=a;
		}
	}

	return sum;
}

	int main(){
	//Ask the user to give 2 numbers
	//Capture the values of the numbers from the terminal
	
	int n1, n2;
	cout<<" Please enter the 2 numbers:"<<endl;
	cin>>n1>>n2;
	//Now print the sum of the even numbers between the 2 numbers

	cout<<"The sum of the even numbers between the 2 numbers is:"<<evensum(n1, n2);

	return 0;
}


