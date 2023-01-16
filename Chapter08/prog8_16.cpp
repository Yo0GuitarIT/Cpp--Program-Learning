#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main (void)
{
    int num;
    string proverb;
    cout << "Repeat times:";
    (cin >> num).get();
    cout << "Input Word which to be print:";
    getline(cin,proverb);
    for (int i ; i<num ;i++)
        cout << proverb << endl;
    
    system("pause");
    return 0;
}