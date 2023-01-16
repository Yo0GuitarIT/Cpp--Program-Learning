#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	int num;
	string season[4]={"Spring","Summer","Autumn","Winter"};
	int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout << "Enter the month:";
	cin >> num;
	
	cout << "Season is ";
	switch(num)
	{
		case 3:
		case 4:
		case 5: cout << season[0] << endl;
				break;
		case 6:
		case 7:
		case 8: cout << season[1] << endl;
				break;
		case 9:
		case 10:
		case 11: cout<< season[2] << endl;
				break;
		case 12:
		case 1:
		case 2:cout<< season[3] <<endl;	
				break;	
		default:
			cout << "No exist!" <<endl;
	}
	
	return 0;
}