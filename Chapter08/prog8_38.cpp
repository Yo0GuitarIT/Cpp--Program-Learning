#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int num;
   char a[26]={'\0'};
   for(int i=0;i<26;i++)
   {
      a[i]=char(i+97); 
      cout << a[i] << " ";
   }  
   cout << endl << endl;
   
   cout << "Odd or Even English letter?" << endl;
   cout << "If Odd press 1,Even press 2" << endl;
   cin >> num;
   
   if(num==1)
   {
	   	for(int i=0;i<26;i+=2)
	   {
	      cout << a[i] << " ";
	   }  
   }
   
   if(num==2)
   {
   		for(int i=1;i<26;i+=2)
	   {
	      cout << a[i] << " ";
	   }
   }
   
   system("pause");
   return 0;
}