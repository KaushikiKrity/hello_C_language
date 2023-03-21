#include<iostream>

using namespace std;

void swap(int *x,int *y)
{
  int *t;
  t=x;
  x=y;
  y=t;
}

int gcd(int a,int b)
{
  if(b>a)
    swap(&a,&b);
  if(a%b==0)
    return b;
  else
    gcd(b,a%b);
}

int main()
{

  cout<<"GCD of "<<12<<" & "<<32<<" = "<<gcd(12,32)<<endl;
  cout<<"GCD of "<<14<<" & "<<48<<" = "<<gcd(14,48)<<endl;

  return 0;
}
