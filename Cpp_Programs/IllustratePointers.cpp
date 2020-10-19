#include<iostream>
using namespace std;
void pointer()
{
    int var;
    cout<<"Enter one number : ";
    cin>>var;
    // declare pointer variable
    int *ptr;
    // note that data type of ptr and var must be same
    ptr = &var;
    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}

// Driver program
int main()
{
    pointer();
}
/*
Input:
Enter one number : 5

output:
Value at ptr = 0x61fde4
Value at var = 5
Value at *ptr = 5

*/
