#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a=5,b=3;
	int *ptr1=&a;
	int *ptr2=&b;
	
	
	cout << "a=" << a << ",b=" << b << endl;
	*ptr1 = *ptr1+*ptr2;
	
	cout <<"a+b="<< a <<endl;
   
   system("pause");
   return 0;
}