#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{	
	int month ;

	cout<<"Input the number of the month :";
	cin>>month;

	switch(month)
	{
		case 1:
		case 2:
			cout<<"Winter Vacation"<<endl;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			cout<<"Second Semester"<<endl;
			break;
		case 7:
		case 8:
			cout<<"Summer Vacation"<<endl;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			cout<<"First Semester "<<endl;
			break;
		default:
			cout<<"Not exist."<<endl;
			break;
	}
	//system("pause");
	return 0;
}