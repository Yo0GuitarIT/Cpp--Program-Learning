#include<iostream>
#include<cstdlib>
using namespace std;

#define Power i*i*i

int main (void)
{
    int i ;
    cout <<"Input an integer:" ;
    cin >> i ;

    cout << i << "*" << i <<"*" << i <<"=" << Power <<endl;
    system("pause");
    return 0;
}