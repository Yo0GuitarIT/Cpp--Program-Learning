#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int ,int);

int main (void)
{
	int a=5,b=10;
	cout << "Before swap(), a=" << a << ", b=" <<b << endl;
	swap(a,b);
	cout << "Afer swap(), a=" << a << ", b=" <<b << endl;
	
	system("pause");
	return 0;	
}

void swap(int x,int y)
{
	int tmp=x;
	x=y;
	y=tmp;
	
	return;
}