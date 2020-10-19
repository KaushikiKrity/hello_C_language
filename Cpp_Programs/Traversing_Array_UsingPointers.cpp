#include <iostream>
using namespace std;
int main(){
   //Pointer declaration
   int *p;
   //Array declaration
   int n;
   cout<<"Enter size of array : ";
   cin>>n;
   cout<<endl;
   int arr[n];
   cout<<"Enter elements of array : ";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<endl;
   //Assignment
   p = arr;
   cout<<"Array elements are : ";
   for(int i=0; i<n;i++){
     cout<<*p<<" ";
     //++ moves the pointer to next int position
     p++;
   }
   return 0;
}
/*
Input:Enter size of array :5
Enter elements of array : 1 2 3 4 5

output:
Array elements are : 1 2 3 4 5
*/

