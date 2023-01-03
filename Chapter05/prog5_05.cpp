#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int num,i=1,sum=0;
	cout<<"Input an integer:"<<endl;
	cin>>num;
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	cout<<"1+2+3+...+"<<num<<"="<<sum<<endl;
		
	//system("pause")
	return 0;
}
