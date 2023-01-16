#include<iostream>
#include<cstdlib>
#include<string>
#include <iomanip>
using namespace std;

int main(void)
{
	string name[5]={"Richard","Amy Lee","Paul Yang","Mary Wang","Jean Fen"};
	int score[5];
    double sum=0.0f;
    
    cout << "Enter Student's score :"<<endl;
    for(int i=0;i<5;i++)
    {
    	cout<<name[i]<<":";
    	cin >> score[i];
	}
    cout << endl;
    
    
    for(int i=0; i<5;i++)
    	cout << name[i] << " ";
    cout << endl;
    
    for(int i=0;i<5;i++)
    {
		cout << "  " << setw(3) << score[i] << "     ";
		sum += score[i];
	}
	
	cout << endl<<endl;
	cout << "Average is " << sum/5 << endl;
    
	return 0;
}