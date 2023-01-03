#include<iostream>
#include<cstdlib>
using namespace std;

int max(int a,int b=10);

int main(void)
{
	cout << "max(15)=" <<max(15) <<endl;
	cout << "max(7,3)=" <<max(7,3) <<endl;
	
	system("pause");
	return 0;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else if(a<b)
		return b;
}