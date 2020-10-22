#include<iostream>

using namespace std;

void print_array(int a[],int n)
{
    static int i=0;
    if(i<n)
    {
        cout<<" "<<a[i];
        i++;
        print_array(a,n);
    }
}

int main()
{
    int a[]={2,3,1,5,7};

    // print_array function takes 2 arguments (array to print & No. of terms)
    cout<<"Given Array is";
    print_array(a,5);
    return 0;
}
