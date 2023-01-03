#include <iostream>
#include <cstdlib>
using namespace std;

bool primeQ(int);

int main(void)
{	
	int i;

	cout<<"Input an integer i:";
	cin>>i;
	
	if (primeQ(i)==true)
		cout<<"Prime.";
	else
		cout<<"Not a prime.";


	//system("pause");
	return 0;
}

bool primeQ(int n)
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