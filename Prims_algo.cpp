#include<bits/stdc++.h>
using namespace std;

int findMinVertex(bool *visited,int *weights,int v)
{
    int minVertex=-1;
    for(int i=0;i<v;i++)
    {
        if(!visited[i] && (minVertex==-1 || weights[i]<weights[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}

void prims(int **edges,int v)
{
    bool *visited = new bool[v];
    int *weights = new int[v];
    int *parent = new int[v];

    for(int i=0;i<v;i++)
    {
        weights[i]=INT_MAX;
        visited[i]=false;
    }
    weights[0]=0;
    parent[0]=-1;
    for(int i=0;i<v;i++)//v or v-1 will be same here
    {
        // Find min Vertex
        int minWeightVertex = findMinVertex(visited,weights,v);
        visited[minWeightVertex] = true;

        // Explore un-visited neighbours
        for(int j=0;j<v;j++)
        {
            if(edges[minWeightVertex][j]!=0 && !visited[j])
            {
                if(edges[minWeightVertex][j]<weights[j])
                {
                    weights[j]=edges[minWeightVertex][j];
                    parent[j]=minWeightVertex;
                }
            }
        }
    }

    for(int i=1;i<v;i++)
    {
        if(parent[i]<i)
        {
            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
        }
        else
        {
            cout<<i<<" "<<parent[i]<<" "<<weights[i]<<endl;
        }
    }

    delete []visited;
    delete []weights;
    delete []parent;
}

int main()
{
    int v,e;
    cin>>v>>e;

    int **edges = new int*[v];
    for(int i=0;i<v;i++)
    {
        edges[i] = new int[v];
        for(int j=0;j<v;j++)
        {
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s] = weight;
        edges[s][f] = weight;
    }

    prims(edges,v);

    for(int i=0;i<v;i++)
    {
        delete []edges[i];
    }
    delete []edges;
}
