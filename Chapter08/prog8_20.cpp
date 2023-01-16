#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	int i;
	char student[3][15];
	
	for(i=0 ; i<3 ; i++)
	{
		cout << "Input Student " << i << " 's name:";
		cin.getline(student[i],15);
	}
	cout << "***OUTPUT***" << endl;
	
	for(i=0 ; i<3 ; i++)	
		cout << "students[" << i << "]=" << student[i]<<endl;
	
	system("pause");
	return 0;
}