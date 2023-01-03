#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	cout<<"The integer can be divide by 18 under 100:"<<endl;

	for (int i = 0; i<=100; ++i)
	{
		if (i%18==0)
		{
			cout<<i<<endl;
		}
		
	}

	//system("pause");
	return 0;

}