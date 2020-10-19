#include <iostream>
using namespace std;
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
 		
    cout<<"Input a String : ";
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
    cout<<"Reverse of the string is : "<<revstr;
    return 0;
}

/*  Sample Test Cases :

    Test Case 1:  Input a String : Happy
                  (Output) : Reverse of the string is : yppaH

    Test Case 2:  Input a String : Coding
                  (Output) : Reverse of the string is : gnidoC
                  
*/
                  
                  


