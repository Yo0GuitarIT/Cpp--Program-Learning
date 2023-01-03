#include <iostream>
#include <cstdlib>
using namespace std;

int total(int);

int main(void)
{	
	int n,addsum;
	cout<<"Input addsum n:";
	cin>>n;
	
	for (int i = 1; i <=n; i++)
		addsum=total(i);

	cout<<"1+2+...+"<<n<<"="<<addsum<<endl;

	//system("pause")
	return 0;
}

int total(int k)
{
	static int sum=0;

	sum +=k;

	return sum;
}