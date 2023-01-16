#include<iostream>
#include<cstdlib>
using namespace std;

void square(int *);

int main(void)
{
	int a[3]={3,5,7};
	
	for(int i=0;i<3;i++)
		cout << "a[" << i+1 << "]=" << a[i] << endl;
	
	cout << "After square():" <<endl;
	
	square(a);
	
	for(int i=0;i<3;i++)
		cout << "a[" << i+1 << "]=" << a[i] << endl;
	
	return 0;
}

void square(int *arr)
{
	for(int i=0;i<3;i++)
		*(arr+i)=(*(arr+i)) * (*(arr+i));
	return;
}
