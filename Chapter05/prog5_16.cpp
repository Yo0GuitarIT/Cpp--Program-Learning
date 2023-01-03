#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int score;
	
	cout<<"Input your score:";
	cin>>score;

	if (score>=80 && score<=100)
	{
		cout<<score<<" is A "<<endl;
	}
	else if (score>=60 && score<79)
	{
		cout<<score<<" is B "<<endl;
	}
	else if (score<=59 && score>=0)
	{
		cout<<score<<" is C "<<endl;
	}
	else 
	{
		cout<<" Do not exist. "<<endl;
	}



	//system("pause")
	return 0;
		
}