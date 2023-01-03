#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	float weight,height,BMI;
	
	cout<<"Input your weight:";
	cin>>weight;
	cout<<"Input your height(m)";
	cin>>height;

	BMI=weight/(height*height);
	
	cout<<"BMI is "<<BMI<<endl;
	if(BMI<=18.5)
	{
		cout<<"Too Skin!!"<<endl;
	}
	else if (BMI>=24)
	{
		cout<<"Too fat!!"<<endl;
	}
	else
	{
		cout<<"Good"<<endl;
	}	


	//system("pause")
	return 0;
		
}