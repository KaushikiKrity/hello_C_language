#include<iostream>
using namespace std;
void sort(int n, int* ptr)
{
    int i, j, t;

    // Sort the numbers using pointers
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(ptr + j) < *(ptr + i)) {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }

    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
int main()
{
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
   sort(n,arr);
   return 0;

}
/*
Input:Enter size of array :5
Enter elements of array : 5 4 3 2 1

output:
Array elements are : 1 2 3 4 5
*/

