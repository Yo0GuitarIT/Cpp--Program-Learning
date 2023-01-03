// f(x)計算

#include<iostream>
#include<cstdlib>

using namespace std;

double f(double x);

int main(void)
{
	double sum;
	cout<<"Calculate 3*x^3 + 2*x + 1=:"<<endl<<endl;
	
	sum =f(-3.2);
	cout<<"f(-3.2) ="<<sum<<endl;

	sum =f(-2.1);
	cout<<"f(-2.1) ="<<sum<<endl;

	sum =f(0);
	cout<<"f(0) ="<<sum<<endl;

	sum =f(2.1);
	cout<<"f(2.1) ="<<sum<<endl;
	//system("pause");
	return 0;
}

double f(double x)
{
	double a;
	a=(3*x*x*x)+(2*x)+1;

	return a;
}