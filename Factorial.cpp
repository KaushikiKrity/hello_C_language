#include <iostream>
using namespace std;
void findFact(int,int*);
int main()
{
         int fact;
         int num1;
	
		cout<<" Input a number :";
		cin>>num1;		 

         findFact(num1,&fact);
         cout<<" The Factorial of "<<num1<<" is :\n"<<fact;
         return 0;
        }

void findFact(int n,int *f)
		{
        int i;

       *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
       }