/*Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and dividend should be integers.)*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,rem,quo;
	cout<<"Enter the dividend : ";
	cin>>a;
	cout<<"Enter the divisor : ";
	cin>>b;
	rem = a%b;
	cout<<rem;
	quo = a/b;
	cout<<"\n"<<quo;
}
