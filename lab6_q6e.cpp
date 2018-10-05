//Write a main program.
//Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
//Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
//Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
//Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
//Then display the values

//Include all the necessary libraries
#include <iostream>
using namespace std;

int evensum(int firstnum, int secondnum)
{
	int sum=0;
//Programme to find sum of all the even numbers between 2 numbers

	for(int a=firstnum+1;a<secondnum; a++)
	{
		if (a%2==0)
	{
		sum+=a;
	}
	
	}
	
	return sum;
}

int oddsum(int firstnum,int secondnum)
{
	int sum=0;
//Programme to find sum of all the odd numbers between 2 numbers

	for(int a=firstnum+1;a<secondnum;a++)
	{
		if(a%2==1)
	{
		sum+=a;
	}

	}
	
	return sum;
}

int evensqrsum(int firstnum, int secondnum)
{
	int sum=0;
//Programme to find sum of the squares of all even numbers between 2 numbers
	for(int a=firstnum+1;a<secondnum;a++)

	{
		if(a%2==0)
	{
		sum+=a;
	}

	}
	return sum;
}

int oddsqrsum(int firstnum, int secondnum) 
{
	int sum=0;
//Programme to find sum of the squares of all odd numbers between 2 numbers
	for(int a=firstnum+1;a<secondnum;a++)

	{
		if(a%2==1)
	{
		sum+=a;
	}

	}
	return sum;
 }

int main(){

//Last Bit
//Declaring variables

	int n1,n2;
	cout<<"Please Enter the 2 numbers:"<<endl;
	cin>>n1>>n2;
	//Final output
	//Final values of all
	int sumEven,sumOdd,sumSquareEven,sumSquareOdd;

	sumEven=evensum(n1,n2);
	sumOdd=oddsum(n1,n2);
	sumSquareEven=evensqrsum(n1,n2);
	sumSquareOdd=oddsqrsum(n1,n2);

	cout<<"Odd Sum is:"<<sumOdd<<endl;
	cout<<"The Even Sum is:"<<sumEven<<endl;
	cout<<"The Even sqaures sum is:"<<sumSquareEven<<endl;
	cout<<"The odd Squares sum is:"<<sumSquareOdd<<endl;
	return 0;
}
