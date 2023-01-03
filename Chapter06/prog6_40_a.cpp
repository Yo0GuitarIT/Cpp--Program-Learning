#include<iostream>
#include<cstdlib>
using namespace std;

unsigned long int fib(int);

int main(void)
{	
	int x =48;

	cout<< "fib(" << x << ") = "<<fib(x)<<endl;	
	//system("pause")
	return 0;
}

unsigned long int fib(int x)
{
	unsigned long int f_1=1;
	unsigned long int f_2=1;
	unsigned long int f=0;
	
	for (int i=3; i<=x; i++)
	{
		f=f_1+f_2;
		f_2=f_1;
		f_1=f;
	}
	return f;
}
