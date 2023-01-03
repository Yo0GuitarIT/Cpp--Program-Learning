#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int i=1 ;
	bool flag = false;

	while(!flag)
	{	
		if(i%3==1 && i%5==3 && i%7==2)
		{
			flag = true;
			break;
		}
		i++;
	}
	
	cout<<"The ansner is "<<i<<endl;
	//system("pause");
	return 0;
}