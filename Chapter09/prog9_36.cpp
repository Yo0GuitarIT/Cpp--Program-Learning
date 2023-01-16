#include<iostream>
#include<cstdlib>
using namespace std;
void replace(char *);

int main (void)
{
	char str[20];
	char *ptr = str;
	cout << "Input the string:";
	cin.getline(str,20);
	
	replace(str);
	return 0;
}

void replace(char* src)
{
    int count = 0;
    char *end = NULL;
    char *pend = NULL;
    char *str = src;
    
    while (*str)
    {
        if (*str == ' ')
            count++;
        str++;
    }
    
    end = str-1;
    pend = end+count;
    
    while (end != pend)
    {
        if (*end != ' ')
            *pend-- = *end--;
        else
        {
            *pend-- = '*';
            *pend-- = '*';
            end--;
        }
    }
    cout << src;
    
    return;
}