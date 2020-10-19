#include <iostream>
using namespace std;
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
 	
    cout<<" Input a string "<<"\n";
    cin>>str1;
    while(*stptr)
    {
     stptr++;
     i++;
    }
    while(i>=0)
    {
     stptr--;
     *rvptr = *stptr;
     rvptr++;
     --i;
    }
    *rvptr='\0';
    cout<<"Reverse of the string is :\n"<<revstr;
    return 0;
}