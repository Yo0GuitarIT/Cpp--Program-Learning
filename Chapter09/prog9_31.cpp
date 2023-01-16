#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a[10];
	double sum= 0.0;
	
	cout << "Input number :" <<endl;
	
	for(int i=0 ; i<10 ;i++)
	{
		cout << "a[" << i+1 << "]=";
		cin >> a[i];
	}
	
	cout << endl;
	cout << "a[10]=";
	
	for(int i=0 ; i<10 ;i++)
		cout <<a[i] << " ";
	
	for(int i=0 ; i<10 ;i++)
		sum+= *(a+i);
	
	cout << endl;
		
	cout <<"Avg:" << sum/10 <<endl;
	return 0;
}