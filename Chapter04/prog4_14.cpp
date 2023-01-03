#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	//...................................1
	//char ch = 't';
	//int i = ch;

	if('t' < 53)
		cout<<"1.Correct!"<<endl;
	else
		cout<<"1.Wrong~"<<endl;
    
    //...................................2
	if(5+8 != 7-9)
			cout<<"2.Correct!"<<endl;
		else
			cout<<"2.Wrong~"<<endl;

	//...................................3
	if(5 > 10)
			cout<<"3.Correct!"<<endl;
		else
			cout<<"3.Wrong~"<<endl;

	//...................................4
	
	if('y' == 'y')
			cout<<"4.Correct!"<<endl;
		else
			cout<<"4.Wrong~"<<endl;

	//system("pause")
	return 0;
}