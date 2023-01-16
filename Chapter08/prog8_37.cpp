#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
   char a[26]={'\0'};
   for(int i=0;i<26;i++)
   {
      a[i]=char(i+65); //ASCII char(65)=A ... char(66)=B
      cout << a[i] << " ";
   }  
   cout << endl;
   cout << a <<endl;
   system("pause");
   return 0;
}