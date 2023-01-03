#include<iostream>
#include<cstdlib>
using namespace std;

float power(float,int);

int main (void)
{
	float x;
	int n;
	cout<<"Intput the float x:";
	cin>>x;
	cout<<"Intput the integer power n:";
	cin>>n;
	
	cout<<x<<"^"<<n<<"="<<power(x,n)<<endl;
	//system("pause")
	return 0;
}

float power(float a,int b)
{
	while(b>1)
		return a*power(a,b-1);
	
	return a;
}