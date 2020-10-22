// Binary search using Recursion

#include<iostream>

using namespace std;

void bin_sr(int a[], int f, int l, int x)
{
    if(f<l)
    {
      int mid=(f+l)/2;
      if(a[mid]>x)
        bin_sr(a,f,mid-1,x);
      else if(a[mid]==x)
      {
       cout<<x<<" is found at index "<<mid<<endl;
       return;
      }
      else
        bin_sr(a,mid+1,l,x);
    }
    else
        {
            cout<<x<<" is not found at any index"<<endl;
            return;
        }
}

int main()
{
    int n[]={1,2,3,4,5,7,9,11,13,17,21};
    bin_sr(n,0,10,9);
    bin_sr(n,0,10,10);

    return 0;
}
