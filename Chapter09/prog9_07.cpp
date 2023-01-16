#include<iostream>
#include<cstdlib>
using namespace std;

void address(int *);

int main(void)
{
	int a=12;
	int *ptr=&a;
	
	address(&a);
	address(ptr);

	return 0;
}

void address(int *pl)
{
	cout << "address on " << pl << ", and save " << *pl <<endl;
	return;
}