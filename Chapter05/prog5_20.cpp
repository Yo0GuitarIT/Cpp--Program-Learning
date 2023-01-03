#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int i=1,n;

	for (n = 1; n<=5; ++n)
	{
		if (n==1)
		{
			cout<<i<<endl;
		}	
		if (n==2)
		{
			i=n;
			cout<<i<<i<<endl;
		}
		if (n==3)
		{
			i=n;
			cout<<i<<i<<i<<endl;
		}
		if (n==4)
		{
			i=n;
			cout<<i<<i<<i<<i<<endl;
		}
		if (n==5)
		{
			i=n;
			cout<<i<<i<<i<<i<<i<<endl;
		}
	}

	//system("pause");
	return 0;

}