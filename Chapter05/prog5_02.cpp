#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int a=5,b=12,min;
	min = (a<b)?a:b; //如果a<b成立,輸出a:b的前項,否則反之.

	cout<<"a="<<a<<", b="<<b<<endl;
	cout<<min<<" is smaller number."<<endl;

	//system("pause")
	return 0;
}
