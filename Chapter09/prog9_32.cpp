#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a[10]={1,3,5,7,9,2,4,6,8,0};
	int b;
	int *ptr = a ;
	cout << "&b=" << &b <<endl;
	
	for(int i=0 ; i<10 ; i++)
	{
		cout <<"&a[" << i << "]=" << ptr++;
		cout << " ,&a[" << i << "]-&b="<<ptr - &b <<endl;
	}
	
	
	
	return 0;
}