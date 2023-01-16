#include<iostream>
#include<cstdlib>
using namespace std;
int main (void)
{
    int i,j,sum=0;
    int sale[2][4]{{30,35,26,32},{33,34,30,29}};
    for (i=0;i<2;i++)
    {
        cout << "saler" << (i+1) <<" each score is ";
        for (j = 0; j < 4; j++)
        {
            cout << sale[i][j] << " ";
            sum+=sale[i][j];
        }
        cout << endl;
    }
    cout << endl << "Total for saling is " << sum << " cars." << endl;

    return 0;
}