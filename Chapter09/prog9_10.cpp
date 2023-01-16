#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int * , int *);

int main(void)
{
	int a=0,b=20;

	cout << "Before swap(), a=" << a << ", b=" <<b << endl;
	swap(&a,&b);
	cout << "Afer swap(), a=" << a << ", b=" <<b << endl;
	
	return 0;
}

void swap(int *p1,int *p2)
{
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
	
	return;
}