/*Covert a no. (number) into bs (base) */

#include<iostream>

#define ll long long

using namespace std;

ll convert(int n,int b)
{
    static ll r=0,i=1;
    if(n)
    {
        r=(n%b)*i+r;
        i=i*10;
        convert(n/b,b);
    }
    else
        return r;
}

int main()
{
    int no=1024,bs=3;
    cout<<"Conversion of "<<no<<" to base "<<bs<<" = "<<convert(no,bs);

    return 0;
}
