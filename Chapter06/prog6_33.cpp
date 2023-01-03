#include<iostream>
#include<cstdlib>
using namespace std;
void mile(void);

int main(void)
{
	
	mile();
	mile();
	mile();
	mile();
	mile();
	

	//system("pause")
	return 0;
}

void mile(void)
{
	static int km = 10;
	cout<<km<<"km = "<<km/1.6<<" miles"<<endl;
	km+=5;
	return;
}