//this program is about bfs that is breadth first search in C++

// Breadth-first search (BFS) is an algorithm that is used to graph data or searching tree or traversing structures. ... This algorithm selects a single node (initial or source point) in a graph and then visits all the nodes adjacent to the selected node. Remember, BFS accesses these nodes one by one.

//all header files included
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
//making an adjacency list
vector<int> adj[N];

int main()
{
    cout<<"----------------------------THIS PROGRAM IS ABOUT DOING BREADTH-FIRST-SEARCH-ON-GRAPH----------------------------"<<endl<<endl;
    //marking the visited array as zero initially

    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    //taking input from the user about the number of vertices and edges
    int n, m;
    cout << "Enter the number of vertices you want in the graph: ";
    cin >> n;
    cout << "Enter the number of edges you want in the graph: ";
    cin >> m;

    //taking inputs about the edges or the edge between the pair of vertices
    cout<<endl<<"Enter "<<m<<" edges"<<endl;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //defining a data structure called queue to store the visited vertices
    queue<int> q;
    q.push(1);
    vis[1] = true;
    cout<<"The bfs of the graph is as follows: "<<endl;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }

    return 0;
}