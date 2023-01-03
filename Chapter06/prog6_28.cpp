#include <iostream>
#include <cstdlib>
using namespace std;

inline bool primeQ(int n)
{
	if(n==2)
		return true;
	else
	{
		for (int i=2; i <=n-1; i++)
		{
			if (n%i==0)
				return false;			
		}
		return true;
	}
}

int main(void)
{	
	for (int k=2; k<=100; k++)
	{
		if (primeQ(k)==true)
		{
			cout<<k<<" ";
		}
	}
	//system("pause");
	return 0;
}
