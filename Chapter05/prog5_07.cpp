#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int i,j;

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
			cout<< i << "*" << j << "=" << (i*j) <<"\t";
		cout<<endl;
	}
	

	//system("pause")
	return 0;
		
}