#include<iostream>
#include<cstdlib>
using namespace std;

void add10(int &,int &);

int main(void)
{
	int a=20,b=50;
	cout<<"Before calling add10(): ";
	cout<<"a="<<a<<", b="<<b<<endl;
	add10(a,b);
	cout<<"After called add10(): ";
	cout<<"a="<<a<<", b="<<b<<endl;
	//system("pause");
	return 0;
}

void add10(int &i,int &j)
{
	i+=10;
	j+=10;
	return;
}