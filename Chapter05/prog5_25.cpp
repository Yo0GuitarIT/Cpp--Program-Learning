#include <iostream>
#include <cstdlib>

using namespace std;

int main (void)
{
	int day=0;
	float l;
	for (l=3500.0; l>0; l/=2)
	{   
		if (l<3)
			break;	
		
		cout<<"The day ==> "<<day;
		cout<<" ,l="<<l<<endl;
		++day;
	}
	cout<<"At the "<< day <<" day, the line will < 3." << endl;
	//system("pause");
	return 0;
}