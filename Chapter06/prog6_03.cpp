#include<iostream>
#include<cstdlib>

using namespace std;

void func (int,int); //宣告函數 無傳回值型態

int main (void)
{
	int a=3,b=6;
	cout<<"In main(), a="<<a<<", b="<<b<<endl;
	func(a,b);
	cout<<"After func(), a="<<a<<", b="<<b<<endl;

	//syatem("pause");
	return 0;
}

void func(int a,int b) //無值回傳
{
	a+=10;
	b+=10;
	cout<<"In func(), a="<<a<<", b="<<b<<endl;
	return;
}