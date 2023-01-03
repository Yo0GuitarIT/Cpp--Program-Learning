#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	int a = 32,b =5;

	a*=2;					//32*2
	a%=b;					//64/5==>>>4

	cout<<"a ="<< a <<endl;
	cout<<"b ="<< b <<endl;

	//system("pause")
	return 0;
}