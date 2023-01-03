#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int a=1,b=1;
	
	do
	{	
		do
		{
			cout<<a<<"*"<<b<<"="<<a*b<<"\t";
			++a;
		}while(a<=9);
		cout<<endl;

		a=1;
		++b;
	}while(b<=9);
	

	//system("pause");
	return 0;

}