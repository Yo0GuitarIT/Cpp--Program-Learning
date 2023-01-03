#include <iostream>
#include<cstdlib>

using namespace std;

void func (void);

int main(void)
{
	int a=30;
	cout<<"In main(), a="<<a<<endl;
	func();
	cout<<"In main(), a="<<a<<endl;

	system("pause");
	return 0; 
}

void func(void)
{
	int a = 10;
	cout<<"In func(), a="<<a<<endl;
	return;
}
