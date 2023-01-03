#include <iostream>
#include<cstdlib>
using namespace std;

float fact(int);

int main(void)
{	
	float sum = 0.0;
	for (int i=1; i <=10; i++)
		sum+=1/fact(i);
	
	cout<<sum<<endl;

	//system("pause")
	return 0;
}

float fact(int n)
{	if (n>1)
		return n*fact(n-1);
	else
		return 1;	
}
