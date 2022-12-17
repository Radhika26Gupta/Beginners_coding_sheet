//Write a Program to Swap Two Numbers without temp variable

#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the first Integer (a) : ";
	cin>>a;
	cout<<"Enter the second Integer (b) : ";
	cin>>b;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"Now the Swapped values of a and b are "<<a<<" , "<<b;
// Same we can do the help of multiplication and division in place of addition and subtraction
}
