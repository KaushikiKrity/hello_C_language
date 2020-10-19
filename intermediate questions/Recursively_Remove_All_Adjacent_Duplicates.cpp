#include<bits/stdc++.h>
using namespace std;
void utility(string s,string res)
{
    int i,n;
    n=s.size();
        if(n==1)
        res=s;
        else
        {
    if(s[0]!=s[1])
     res.push_back(s[0]);
     for(i=1;i<n-1;i++)
     {
         if(s[i]!=s[i+1] && s[i]!=s[i-1])
         res.push_back(s[i]);
     }
     if(s[n-1]!=s[n-2])
     res.push_back(s[n-1]);
        }
        if(res==s)
         {
             cout<<res<<endl;
             return;
         }
        s=res;
        res.clear();
        utility(s,res);
}
int main()
 {

    string s,res;
    cin>>s;
    utility(s,res);

	return 0;
 }


/****
Testcase 1
Input :helllo
output :heo

Testcase 2
Input :youuuareee
output :yoar
*/

