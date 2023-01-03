#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{	
	int i;

	cout<<"1~100 can be divide by 4 & 7:"<<endl;

	for (i =1; i<=100; ++i)
	{
		if (i%7==0 && i%4==0)
		 		{
		 			cout<<i<<endl;
		 		} 		
	}

	//system("pause");
	return 0;

}