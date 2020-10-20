#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            int min=100000;
            int data,ans,sum;
            for(int i=0;i<=nums.size()-3;i++)
            {
                for(int j=i+1;j<=nums.size()-2;j++)
                {
                    for(int k=j+1;k<=nums.size()-1;k++)
                    {

                        ans=abs(target-(nums[i]+nums[j]+nums[k]));

                        if(min>ans)
                        {

                            data=nums[i]+nums[j]+nums[k];
                            min=ans;
                            sum=data;


                        }
                    }
                }
            }
            return sum;
        }
};

int main()
{
    vector<int>v;

    int target,size;
    cout<<"Enter target : ";
    cin>>target;
    cout<<endl;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<endl;
    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    Solution s;
    cout<<s.threeSumClosest(v,target);
}
/*
Input:Enter target : 1
Enter size of array : 4
Enter array elements : -1 2 1 -4
output: 2


Input:Enter target : 1
Enter size of array : 5
Enter array elements : 1 2 -1 2 3
output: 2
*/
