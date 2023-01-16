#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	int i;
	string name[3]={"David","Jane Wang","Tom Lee"};
	string copystr[3];
	
	for(i=0 ; i<3 ; i++)
		copystr[i]=name[i];
	
	cout << endl;
	
	for(i=0 ; i<3 ; i++)	
		cout << "copystr[" << i <<"]="<< copystr[i] <<endl;
		
	system("pause");
	return 0;
}