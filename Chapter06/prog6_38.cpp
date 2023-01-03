// Recursive 1+2+3+4+...n

#include<iostream>
#include<cstdlib>
using namespace std;
int pp(int);

int main(void)
{
	int n = 10000;
	cout<<"1+2+3+...+"<<n<<"="<<pp(n)<<endl;
	//system("pause");
	return 0;
}

int pp(int k)
{
	if (k>1)
		return k+pp(k-1);
	else
		return 1;
}