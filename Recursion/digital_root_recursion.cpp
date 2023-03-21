/*The digital root or digital sum of a non-negative integer is the single-digit value
obtained by an iterative process of summing digits,
on each iteration using the result from the previous iteration to compute the digit sum.
The process continues until a single-digit number is reached.
E.g: 65536 -> 6+5+5+3+6 = 25 -> 2+5 = 7*/

#include<iostream>

using namespace std;

int sum_digits(int n)
{
    if(n/10==0)
        return n;
    else
    return (n%10+sum_digits(n/10));
}

int digital_root(int no)
{
    if(no/10)
    {
        digital_root(sum_digits(no));
    }

    else
        return no;
}

int main()
{
    cout<<"Digital root of "<<65536<<" = "<<digital_root(65536)<<endl;
    cout<<"Digital root of "<<45536<<" = "<<digital_root(45536)<<endl;
    return 0;
}
