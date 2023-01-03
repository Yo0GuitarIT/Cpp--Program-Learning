#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int num = 42;
	if (num%3==0 && num%7==0)
		cout<<num<<" can be 3 & 7 Divide."<<endl;
	else 
		cout<<num<<" can't be 3 & 7 Divide."<<endl;

	//system("pause")
	return 0;
}
