//Write a Program to Swap Two Numbers

#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the first Integer (a) : ";
	cin>>a;
	cout<<"Enter the second Integer (b) : ";
	cin>>b;
	temp = a;
	a = b;
	b = temp;
	cout<<"Now the values of a and b are "<<a<<" , "<<b;
}
