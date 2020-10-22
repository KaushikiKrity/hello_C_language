#include<iostream>

using namespace std;

void printup(int a[], int n)
{
    if(n==1)
    {
        cout<<" "<<a[n-1];
        return;
    }
    printup(a,n-1);
    cout<<" "<<a[n-1];
}

void printdown(int a[], int n)
{
    if(n==1)
    {
        cout<<" "<<a[n-1];
        return;
    }
    cout<<" "<<a[n-1];
    printdown(a,n-1);
}

int main()
{
    int a[]={1,3,5,6,7};
    cout<<"Array printed up is same as given Array ->";
    printup(a,5);
    cout<<"\n";
    cout<<"Array printed down is reverse of given Array ->";
    printdown(a,5);
    return 0;
}
