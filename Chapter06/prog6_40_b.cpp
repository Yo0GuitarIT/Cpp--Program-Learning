#include<iostream>
#include<cstdlib>
using namespace std;

int fib(int);

int main(void)
{
	int x = 48;
	unsigned long int k=0; 

	k = fib(x);

	cout<< "fib(" << x << ") = "<<k<<endl;
	
	//system("pause")
	return 0;
}

int fib(int n)
{	
	if(n==1||n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
