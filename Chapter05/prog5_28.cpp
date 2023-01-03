#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int num ;
	bool flag = false;

	cout<<"Input an integer:";
	cin>>num;

	while(!flag)
	{
		for (int i = 2; i <= num; i++)
		{	
			if (num%i==0 && i!=num)
			{
				cout<<"Not Prime."<<endl;
				break;
			}

			if (i==num)
			{
				cout<<"Prime."<<endl;
				break;
			}
		}
		
		flag = true;
	}
	
	
	//system("pause");
	return 0;
}