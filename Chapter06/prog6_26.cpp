//  攝氏與華氏換算

#include <iostream>
#include <cstdlib>

using namespace std ;
double centigrade(double,double);

int main (void)
{
	double F,C=0;

	cout<<"Input Fahrenheit F:";
	cin>>F;

	cout<<"Celsius is"<<centigrade(F,C)<<endl;

	//system("pause");
	return 0;
}

double centigrade(double a,double b)
{
	b=(5*a-160)/9;

	return b;
}
