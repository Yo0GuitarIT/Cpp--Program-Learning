#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int a,b=5;
	double c =3.14;
	
	cout << "a=" << a << ",sizeeof(a)=" <<sizeof(a);
	cout << ",address is " << &a <<endl;
	
	cout << "b=" << b << ",sizeeof(b)=" <<sizeof(b);
	cout << ",address is " << &b <<endl;
	
	cout << "c=" << c << ",sizeeof(c)=" <<sizeof(c);
	cout << ",address is " << &c <<endl;
	
	return 0;
}