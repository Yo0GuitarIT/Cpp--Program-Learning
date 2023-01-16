#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int a=5,b=10;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;
		
	*ptr1=7;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	*ptr2=32;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	a=17;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	ptr1=ptr2;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	*ptr1=9;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	ptr1=&a;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	a=64;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	*ptr2=*ptr1+5;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;	
	
	ptr2=&a;
	cout << "a=" << a << ", b=" << b;
	cout << ",*pt1=" << *ptr1 << ", *ptr2=" << *ptr2 ;
	cout << " ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;
	cout << endl;

	return 0;
}