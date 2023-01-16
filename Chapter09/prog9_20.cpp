#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	char name[20];
	char *ptr = "how are you?";
	
	cout << "What is your name?" << endl;
	cin.getline(name,20);
	cout << "Hi! " << name << ", " << ptr << endl;
	
	return 0;
}
