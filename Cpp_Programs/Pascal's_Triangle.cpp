#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int> > generate(int numRows) {

        int coef=1;
        for(int i=0;i<numRows;i++)
        {
            for(int space=1;space<=numRows-i;space++)
            {
                cout<<"  ";
            }
            for(int j=0;j<=i;j++)
            {
               if(j==0 || j==i)
               {
                   coef=1;
               }
               else
               {
                   coef=coef*(i-j+1)/j;

               }
               cout<<coef<<"  ";
            }
            cout<<endl;
        }

    }
};


int main()
{
    int numRows;
    cin>>numRows;
    Solution s1;
    s1.generate(numRows);
}
