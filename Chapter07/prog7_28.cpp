#include<iostream>
#include<cstdlib>
using namespace std;
double trapezoid(double,double,double);

int main(void)
{
	double p,q,r;
	cout << "Input Upper,Base,Height:" <<endl;
	cout << "Upper : ";
	cin >>p;
	cout << "Base : ";
	cin >>q;
	cout << "Height : ";
	cin >>r;
	cout <<"The trapezoid is ";
	trapezoid(p,q,r);
	
	system("pause");
	return 0;
}

double trapezoid(double a,double b,double c)
{
	double k;
	k=(a+b*c/2);
	cout << k <<endl;
	return k;
}
	
	