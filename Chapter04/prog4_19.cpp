//英鎊<==>公斤 互換 
//1GBP = 0.454KG

#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	bool i;
	float GBP,KG;

	cout<<"GBP to KG press 0 \n";
	cout<<"KF to GBP press 1"<<endl;
	cout<<"==>";
	
	cin>>i;

	if(i == 0)
	{
		cout<<"Input GBP:";

		cin>>GBP;
		KG = GBP*0.454;
		cout<<GBP<<" GBP is "<<KG<<" KG."<<endl;
	}
	if(i == 1)
	{	
		cout<<"Input KG:";

		cin>>KG;
		GBP = KG/0.454;
		cout<<KG<<" KG is "<<GBP<<" GBP."<<endl;
	}
	//system("pause");
	return 0;
}