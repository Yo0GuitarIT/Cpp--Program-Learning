#include <iostream>
#include <cstdlib>
using namespace std;

void mod(int ,int);

int main(void)
{	
	int p,q;

	cout<<"Input an integer x:";
	cin>>p;
	cout<<"Input an integer y:";
	cin>>q;

	mod(p,q);
	
	//system("pause");
	return 0;
}

void mod(int x ,int y)
{
	int a,b;
	a=x/y;
	b=x%y;
	cout<<"x/y="<<a<<", x%y="<<b<<endl;

	return;
}