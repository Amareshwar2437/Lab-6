//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum.
//Include all the necessary libraries
#include<iostream>
using namespace std;

int sumSquareOddNumbers(int firstnum, int secondnum)
{

	int sum=0;
	int a=firstnum+1;
//Now ask the user to find the odd numbers between the given firstnumber and second number and do the squares and add
//given in the question to use the while loop 
//Do as per the question

	while(a<secondnum)
{
		if (a%2==1)
	{
		sum+=(a*a);
	}
	a++;
}
	return sum;

}

int main(){

//Ask the user to give input of two numbers
//The values of the numbers should be taken from the terminal

	int n1, n2;
	cout<<"Please enter any 2 numbers:"<<endl;
	cin>>n1>>n2;

//Now time to get output of the sum of the squares of all odd numbers between 2 numbers

	cout<<" The sum of the squares of the odd numbers between 2 numbers is"<<sumSquareOddNumbers(n1,n2)<<endl;

	return 0;
}	
