#include<iostream>
#include<cstdlib>
using namespace std;

void add10(int *);

int main (void)
{
	int a=5;
	cout << "Before call add10(), a=" << a << endl;
	add10(&a);
	cout << "After call add10(), a=" << a << endl;
	
	system("pause");
	return 0;	
}

void add10(int *pl)
{
	*pl+=10;
	return;
}