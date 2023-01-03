#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int i,sum=0 ;

	cout<<"1^3+2^3+3^3+...+100^3=";

	for (i = 1; i<=100; ++i)
	{
		sum +=i*i*i; 		
	}

	cout<<sum<<endl;
	//system("pause");
	return 0;

}