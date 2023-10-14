#include <iostream>
#include <vector>

using namespace std;

int find(int x, vector<int>&parent) {
    if (parent[x] == x) {
        return x;
    }
    
    return find(parent[x], parent);
}

void Union(int x, int y, vector<int>&parent, vector<int>&rank) {
    if (rank[x] > rank[y]) {
        parent[y] = x;
        rank[x]++;
    }
    else if (rank[x] < rank[y]) {
        parent[x] = y;
        rank[y]++;
    }
    else    
        parent[y] = x;
    
    rank[x]++;
}

bool isCycle(vector<vector<int> > &edges, int v) {
    vector<int> parent(v);

    for (int i = 0; i < v; i++) {
        parent[i] = i;
    }
    
    vector<int> rank(v, 0);

    for(auto edge : edges) {
        int x = find(edge[0], parent);
        int y = find(edge[1], parent);

        if (x != y) {
            Union(x, y, rank, parent);
        }
        else
            return true;
    }
}

int main() {
    int n, m;
    cout << "Enter the edge and nodes : " ;
    cin >> n >> m;

    vector<vector<int> > edges(n + 1);
    for (int i = 0; i < n; i++) {
        int u, v;
        cout << "Enter the Nodes and vertex u, v : ";
        cin >> u >> v;

        edges[i] = vector<int>{u, v};
    }

    if (isCycle(edges, m)) {
        cout << "There is a cycle in a graph." << endl;
    }
    else
        cout << "There is no cycle in a graph." << endl;
    
    return 0;
}