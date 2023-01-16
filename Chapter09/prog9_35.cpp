#include <iostream>
#include <cstdlib>

using namespace std;

#define LENGTH 80
void convert(char *);

int main(void)
{
   char a[LENGTH];
   cout << "Input source string:";
   cin.getline(a,LENGTH);
   cout << "Before process..." << endl;
   cout << "string=" << a << endl;
   convert(a);
   cout << endl << "After process..." << endl;
   cout << "string=" << a << endl;
   
   system("pause");
   return 0;
}

void convert(char *m)
{
   for(int j=0;j<strlen(m);j++)
      if (*(m+j)=='\0')
         break;
      else if((*(m+j)>=97) && (*(m+j)<=122))
         *(m+j)-=32;
   return;
}
