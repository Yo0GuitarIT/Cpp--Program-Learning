#include<iostream>
#include<cstdlib>
using namespace std;

int power(int,int);
double power(double,int);

int main (void)
{
	int x;
	double y;
	int n;
	cout << "Input x,y,n:" <<endl;
	cout << "x : ";
	cin >>x;
	cout << "y : ";
	cin >>y;
	cout << "n : ";
	cin >>n;

	cout << "power(" <<x <<"," <<n<< ")"<< power(x,n) << endl;
	cout << "power(" <<y <<"," <<n<< ")"<< power(y,n) << endl;
	
	system("pause");
	return 0;
}

int power(int i,int j)
{
	if(j!=1)
		return i*power(i,j-1);
	else
		cout <<"int===>";
		return i;
}

double power(double i,int j)
{
	if(j!=1)
		return i*power(i,j-1);
	else
		cout <<"double==>";
		return i;
}
