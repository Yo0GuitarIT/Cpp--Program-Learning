#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 5

int main(void)
{
    int score[MAX];
    int i=0,num;
    float sum=0.0f;
    cout << "Enter 0 stopping input!!"<< endl;
    do
    {
        if(i==MAX)
        {
            cout << "No more space!!" << endl;
            i++;
            break;
        }
        cout << "Input Score:";
        cin >>score[i];
    }while(score[i++]>0);
    num = i-1;
    for (i = 0; i < num; i++)
        sum+=score[i];
    cout <<"Average of all is " << sum/num << endl;

    return 0;
}