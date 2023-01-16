#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   string str;
   int i=0,A=0,E=0,I=0,O=0,U=0,other=0;
   cout << "Enter String: ";
   getline(cin,str);
   cout << "The String is " << str << endl;
   while(str[i]!= '\0')
   {
      switch(str[i])
      {
         case 'A':
         case 'a':A=A+1;
                  break;
         case 'E':
         case 'e':E=E+1;
                  break;
         case 'I':
         case 'i':I=I+1;
                  break; 
         case 'O':
         case 'o':O=O+1;
                  break;
         case 'U':
         case 'u':U=U+1;
                  break;
         default : other++;
      }
      i++;
   }
   cout <<"A,E,I,O,U:" << endl; 
   cout << "A,a=" << A << endl;
   cout << "E,e=" << E << endl;
   cout << "I,i=" << I << endl; 
   cout << "O,o=" << O << endl;
   cout << "U,u=" << U << endl;
   cout << "other=" << other << endl;

   system("pause");
   return 0;
}