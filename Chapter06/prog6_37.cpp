#include<iostream>
#include<cstdlib>
using namespace std;
double avg(float,float,float);

int main (void)
{
	float a,b,c;
	cout<<"Input integer a:";
	cin>>a;
	cout<<"Input integer b:";
	cin>>b;
	cout<<"Input integer c:";
	cin>>c;

	
	cout<<"\n"<<a<<","<<b<<","<<c<<" avg is "<<avg(a,b,c)<<endl;
	//system("pause");
	return 0;
}

double avg(float a,float b,float c)
{	
	float A;
	A=(a+b+c)/3;
	return A;
}