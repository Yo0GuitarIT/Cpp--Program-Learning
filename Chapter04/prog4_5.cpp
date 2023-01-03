#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int i;
	cout<<"Input an intrger: ";
	cin>>i;
	
	if (i>5)
		cout<< i <<" is >5!!"<<endl;
	
	if (i%2==0)
		cout<< i <<" is Even~~"<<endl;
	
	if (true)
		cout<<"This is Always be Compiled"<<endl;
		
	
	system("pause");
	return 0;
}