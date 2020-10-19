#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int max=nums[0];
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            if(max<nums[i])
            {
                max=nums[i];
            }
        }
        for(int i=1;i<=max+1;i++)
        {
            if(s.find(i)==s.end())
            {
                return i;
            }
        }

    }
};
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    Solution s1;
    cout<<s1.firstMissingPositive(v);
}
/*
Testcase 1:
Input :3 2 1
output:4

Input :0 12 2 4 5
output:1
*/
