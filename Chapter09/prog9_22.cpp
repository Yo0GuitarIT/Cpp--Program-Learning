#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int a=12;
	int *ptr;
	ptr = &a;
	cout << "a=" << a <<endl;
	cout << "&a=" << &a <<endl;
	cout << "ptr=" << ptr <<endl;
	cout << "*ptr=" << *ptr <<endl;
	
	return 0;
}