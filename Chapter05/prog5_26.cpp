#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int i,num=45;
	int prime = num-1;
	bool flag = false;

	while(!flag)     //flag = false  //flag=0
	{
		for (i = 2; i < prime; i++)
		{
			if(prime%i==0)
			{
				prime--;
				continue;
			}
		}
		flag=true;
	}

	cout<<"The max prime under 45 is "<<prime<<endl;
	//system("pause");
	return 0;
}