#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    if(n>0){
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" : "<<fact<<endl;
    }
    else
        cout<<"You have entered negative number "<<endl;
}

/*
OUTPUT:

Testcase 1
Enter a positive number : 5
Factorial of 5 = 120

Testcase 2
Enter a positive number : -1
You have entered negative number
*/
