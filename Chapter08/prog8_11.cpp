#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    char a[]="My Friend";
    char b = 'c',str[]="c";
    cout << "sizeof(a)=" << sizeof(a) << endl;
    cout << "sizeof(b)=" << sizeof(b) << endl;
    cout << "sizeof(c)=" << sizeof(str) <<endl;

    system("pause");
    return 0;
}