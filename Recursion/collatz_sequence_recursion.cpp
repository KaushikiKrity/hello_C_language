/*Collatz Sequence is defined corresponding to n as the numbers
  formed by the following operations:
  (i) If n is even, then n = n / 2.
  (ii) If n is odd,then n = 3* + 1.*/

#include<iostream>

using namespace std;

void collatz_sequence(int n)
{
    if(n==1)
    {
      cout<<n<<" ";
      return;
    }
    else
        if(n%2==0)
        {
          cout<<n<<" ";
          collatz_sequence(n/2);
        }
        else
        {
          cout<<n<<" ";
          collatz_sequence(n*3+1);
        }
}

int main()
{
    int no=7;
    cout<<"Collatz sequence for "<<no<<" -> ";
    collatz_sequence(no);

    return 0;
}
