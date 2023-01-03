#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int i ;

	cout<<"Under 100 integer,can be divid by 2&3"; 
	cout<<",but can't divid by 12:"<<endl;

	for (i = 0; i < 100; i++)
	{
		if (i%2==0 && i%3==0)
		{
			if (i%12==0)
			continue;   //return ==> if (i%2==0 && i%3==0)
			cout<<i<<endl;	
		}
	}
	//system("pause");
	return 0;
}