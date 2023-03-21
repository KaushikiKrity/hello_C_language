#include<iostream>

using namespace std;

void fibonacci(int n)
{
    static int n1=0,n2=1,n3=n1,i=n;
    if(n!=0)
    {
        if(n>i-2)
        {
           cout<<" "<<n3;
           n3=n2;
           fibonacci(n-1);
        }
       else
       {
            n3=n1+n2;
            cout<<" "<<n3;
            n1=n2;
            n2=n3;
            fibonacci(n-1);
       }
    }
}

int main()
 {
    // function fibonacci takes argument as No. of terms in the series
    cout<<"Required fibonacci series is ";
    fibonacci(10);
    return 0;
 }
