#include <iostream>
#include<cstdlib>

using namespace std;

void peri(double),area(double);

int main(void)
{
	extern double pi;
	double r=1.0;
	cout<<"pi="<<pi<<endl;
	cout<<"radius="<<r<<endl;
	peri(r);
	area(r);
	
	//system("pause");
	return 0; 
}

double pi =3.14;

void peri(double r)
{
	cout<<"peripheral length="<<2*pi*r<<endl;
	return;
}

void area(double r)
{
	cout<<"area="<<pi*r*r<<endl;
	return;
}