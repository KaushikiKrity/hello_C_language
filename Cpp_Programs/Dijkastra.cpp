#include<iostream>
#include<climits>
using namespace std;

int findMinVertex(int distance[],bool visited[],int n)
{
    int MinVertex=-1;
    for(int i=0;i<n;i++)
    {
        if(!visited[i] &&(MinVertex==-1  || distance[i]<distance[MinVertex]))
        {
            MinVertex=i;
        }
    }
    return MinVertex;
}

void dijkastra(int** edges,int n)
{
    int dist[n];
    bool visited[n];
    for(int i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
        visited[i]=false;
    }
    dist[0]=0;

   for(int i=0;i<n;i++)
   {
       int minVertex=findMinVertex(dist,visited,n);
       visited[minVertex]=true;
       for(int j=0;j<n;j++)
       {
           if(edges[minVertex][j]!=0 && !visited[j])
           {
               int d=dist[minVertex]+edges[minVertex][j];
               if(d<dist[j])
               {
                   dist[j]=d;
               }
           }
       }
   }



   for(int i=0;i<n;i++)
   {
       cout<<i<<" "<<dist[i]<<endl;
   }
   delete[] visited;
   delete[] dist;
}


int main()
{
    int n,e;
    cout<<"Enter no of nodes "<<endl;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++)
    {
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;

    }
    cout<<endl;
    dijkastra(edges,n);
    for(int i=0;i<n;i++)
    {
        delete [] edges[i];

    }
    delete [] edges;
}
