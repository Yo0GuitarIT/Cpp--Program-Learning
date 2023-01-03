#include<iostream>
#include<cstdlib>
using namespace std;
#include "D:\Yo0\Program C++\Chapter07\head_math.h"
int main(void)
{
    int UB,LB,H,R;
    cout << "Input TRAPEZOID UB,LB,H:" << endl;
    cout << "UB:";
    cin >> UB;
    cout << "LB:";
    cin >> LB;
    cout << "H:";
    cin >> H;
    cout << "TRAPEZOID is " << TRAPEZOID(UB,LB,H) <<endl<<endl;
    
    cout << "Input Ball Radius R:" << endl;
    cout << "R:";
    cin >> R;
    cout << "PERIPHERY is " << PERIPHERY(R) <<endl;
    cout << "VOLUMN is " << VOLUMN(R) <<endl;
    
    
    system("pause");
    return 0;
}