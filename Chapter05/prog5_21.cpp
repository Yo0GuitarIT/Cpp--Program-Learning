#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int i,sum;
	
	i=1;
	sum=0;

	cout<<"Even==> 1~20:";

	while(i<=20)
	{
		if (i%2==0)
		{	
			sum+=i*i;
			cout<<i<<" ";
		}
		++i;
				

	}
	cout<<endl;
	cout<<sum<<endl;
	//system("pause");
	return 0;

}