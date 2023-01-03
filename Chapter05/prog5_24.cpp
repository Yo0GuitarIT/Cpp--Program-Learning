#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int i=0;

	cout<<"Into the loop, i= "<<i<<endl;
	
	for(i=0;i<=99999999;i++);
	
	
	cout<<"Output the loop, i= "<<i<<endl;

	//system("pause");
	return 0;
}