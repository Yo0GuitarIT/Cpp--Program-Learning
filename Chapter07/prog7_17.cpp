#include<iostream>
#include<cstdlib>
using namespace std;
#include"D:\Yo0\Program C++\Chapter07\area.h"


int main(void)
{
    float base ,height;
    cout<< "Input the base of trangle;";
    cin>>base;
    cout<<"Input the height of trangle;";
    cin>>height;
    cout<<"The area of triangle is "<< TRIANGLE(base,height)<<endl;

    system("pause");
    return 0;
}
