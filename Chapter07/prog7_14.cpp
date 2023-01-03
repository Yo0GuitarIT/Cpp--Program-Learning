#include<iostream>
#include<cstdlib>
using namespace std;

#define Power(X) X*X*X

int main (void)
{
    int i ;
    cout <<"Input an integer:" ;
    cin >> i ;

    cout << i << "*" << i <<"*" << i <<"=" << Power(i) <<endl;
    system("pause");
    return 0;
}