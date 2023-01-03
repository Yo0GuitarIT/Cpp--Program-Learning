#include<iostream>
#include<cstdlib>
using namespace std;

double km(register double);

int main (void)
{
	register double t;
	for (t=60; t<=100; t+=10)
	{
		cout<<t<<" miles = "<<km(t)<<" km."<<endl;
	}
	//system("pause")
	return 0;
}

double km(register double i)
{
	return 1.6*i;
}
