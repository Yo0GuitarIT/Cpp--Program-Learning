#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int i,sum;

	i=1;
	sum = 0;
	while(i<=200)
	{
		if (i%2==0)
		{	
			sum+=i;
			
		}
		++i;
	}

	cout<<"n=200, 2+4+6+...+n="<<sum<<endl;

	//system("pause");
	return 0;

}