#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	string a,b,c,d,e;
	string str[5];
	
    cout << "Enter 5 string:" <<endl;
    cout << "1:";
	getline(cin,a);
	cout << "2:";
	getline(cin,b);
	cout << "3:";
    getline(cin,c);
	cout << "4:";
    getline(cin,d);
	cout << "5:";
    getline(cin,e);
    
    str[0]=a;
    str[1]=b;
    str[2]=c;
    str[3]=d;
    str[4]=e;
    
    cout << "str[5]=";
    for(int i=0;i<5;i++)
     cout << str[i] <<" ";
    cout << endl;
    
    cout << "Total length is ";
    cout << a.length()+b.length()+c.length()+d.length()+e.length() << endl;
    
	return 0;
}