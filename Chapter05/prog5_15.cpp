#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int cost;
	float total;

	cout<<"Input your cost:";
	cin>>cost;

	if (cost>=1000 && cost<3000)
	{
		total=cost*0.95f;
		cout<<"The total is "<<total<<endl;
	}
	else if (cost>=3000 && cost<=4999)
	{
		total=cost*0.92f;
		cout<<"The total is "<<total<<endl;
	}
	else if (cost>=5000 && cost<=9999)
	{
		total=cost*0.9f;
		cout<<"The total is "<<total<<endl;
	}
	else if (cost>=10000)
	{
		total=cost*0.85f;
		cout<<"The total is "<<total<<endl;
	}
	else 
	{
		total=cost;
		cout<<"The total is "<<total<<endl;
	}
	
	//system("pause")
	return 0;
		
}