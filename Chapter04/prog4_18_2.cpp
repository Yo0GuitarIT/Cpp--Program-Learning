//台幣換算美元 

#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	float USD,NTD;
	
	
	
	cout<<" Input NTD: "<<endl;
	cin>>NTD;

	cout<<"ok!"<<endl;

	USD = NTD/32.33;
	cout<<" It's "<<USD<<"USD"<<endl;

	system("pause");
	return 0;
}