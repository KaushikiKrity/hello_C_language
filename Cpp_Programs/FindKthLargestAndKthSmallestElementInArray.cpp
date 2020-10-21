#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter k"<<endl;
    cin>>k;
    sort(arr,arr+n);
    cout<<" k'th Max Element will be "<<arr[n-k]<<endl;

    cout<<" k'th Min Element will be "<<arr[k-1]<<endl;
}
