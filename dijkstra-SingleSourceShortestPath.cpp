// Dijkstra's Single Source Shortest Path Algorithm

#include <bits/stdc++.h>
#define INF 10000

using namespace std;

class Graph {
    map<int, list<pair<int, int>>> m;
    bool isDirected;

   public:
    Graph(bool directs) {
        isDirected = directs;
    }

    void addEdge(int v1, int v2, int weight) {
        m[v1].push_back(make_pair(v2, weight));
        if (!isDirected) m[v2].push_back(make_pair(v1, weight));
    }

    void print() {
        cout << "Graph represented as adjacency list:\n";
        for (auto member : m) {
            cout << member.first << " --> ";
            for (auto i : member.second) {
                cout << " (" << i.first << ", " << i.second << ")";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    void DijkstraPath(int source) {
        unordered_map<int, int> distance;
        for (auto element : m) {
            distance[element.first] = INT_MAX;
        }

        set<pair<int, int>> newset;  // (Distance, Node)

        distance[source] = 0;
        newset.insert(make_pair(0, source));

        while (!newset.empty()) {
            auto pair = *(newset.begin());  // get first pair
            int element = pair.second;
            int dist = pair.first;
            newset.erase(newset.begin());

            for (auto cpair : m[element]) {
                if (dist + cpair.second < distance[cpair.first]) {
                    int destination = cpair.first;
                    auto first = newset.find(make_pair(distance[destination], destination));

                    if (first != newset.end()) newset.erase(first);
                    distance[destination] = dist + cpair.second;
                    newset.insert(make_pair(distance[destination], destination));
                }
            }
        }

        cout << "Dijkstra distances: "
             << "\n";
        for (auto dist : distance) {
            cout << dist.first << " -> " << dist.second << "\n";
        }
    }
};

int main() {
    bool isDirected = false;
    Graph g(isDirected);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 7);
    g.addEdge(1, 3, 4);
    g.addEdge(4, 3, 2);
    g.addEdge(3, 2, 1);
    g.print();
    g.DijkstraPath(1);
    return 0;
}