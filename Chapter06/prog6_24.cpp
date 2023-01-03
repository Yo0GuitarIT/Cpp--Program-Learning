/*
1    1     1         1     1     1  
- + --- + --- +...+ --- + --- + ---- =?
2   2^2   2^3       2^8   2^9   2^10
*/
#include<iostream>
#include<cstdlib>
using namespace std;

float power(float,int);

int main (void)
{
	int x,n;
	float sum=0;
	cout<<"Intput the float x:";
	cin>>x;
	cout<<"Intput the integer power n:";
	cin>>n;

	for (int i=1; i<=n; i++)
	{
		sum+=(1/power(x,i));
	}
	
	cout<<"1/2 + 1/(2^2) + ... + 1/(2^"<< n << ") = ";
	cout<<sum<<endl;
	//system("pause")
	return 0;
}

float power(float a,int b)
{
	while(b>1)
		return a*power(a,b-1);	
	return a;
}