#include<bits/stdc++.h>
using namespace std;

int bfs(int s1,int s2,int d1,int d2)
{
    int x1[10]={0,-1,-1,-2,-2,2,2,1,1};
    int y1[10]={0,-2,2,-1,1,-1,1,-2,2};
    int visited[9][9];
    int moves[9][9];
    int m,n;
    queue<pair<int,int> >q;
     pair<int,int>p1;
    p1.first=s1;
    p1.second=s2;
    q.push(p1);
    memset(moves,0,sizeof moves);
    memset(visited,0,sizeof visited);
    visited[s1][s2]=1;
    while(!q.empty())
    {
        p1=q.front();
        q.pop();
        if(p1.first==d1 && p1.second==d2)
        {
            return moves[d1][d2];
        }
        for(int i=1;i<=8;i++)
        {
            m=p1.first+x1[i];
            n=p1.second+y1[i];
            if(m>8 || m<1 || n>8 || n<1)
            {
                continue;
            }
            else
            {
                visited[m][n]=1;
                moves[m][n]=moves[p1.first][p1.second]+1;
                q.push(make_pair(m,n));


            }
        }
    }
}




int main()
{
    int x,y,p,q;
    cout<<"Enter source position : ";
    cin>>x>>y;
    cout<<endl;
    cout<<"Enter target position : ";
    cin>>p>>q;
    cout<<endl;
   cout<<"Minimum Knight moves are : "<<bfs(x,y,p,q);
}
/*
sample Input 1:
Enter source position : 2 4
Enter target position : 6 4
output: Minimum Knight moves are : 2


sample Input 2:
Enter source position : 4 5
Enter target position : 1 1
output: Minimum Knight moves are : 3
*/
