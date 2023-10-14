#include <iostream>
#include <vector>
using namespace std;

void dfs(int sv, vector<int>vec[], vector<bool>& vis, vector<int>& dfs) {
    
}

int main() {
    int n, m;
    cout << "Enter the nodes and vertex : ";
    cin >> n >> m;
    
    vector<int> vec(n + 1);
    vector<pair<int,int>> adj(n + 1);

    for (int i = 0; i < n; i++) {
        vec[i] = i;
    }
    
    for (int i = 0; i < m; i++) {
        int v, u;
        cout << "Enter the vertex : ";
        cin >> v >> u;
        vec[v].push_back(u);
        vec[u].push_back(v);
    }

    vector<int> dfs;
    vector<bool> vis;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(0, vec, vis, dfs);
        }
    }
    
    for (int i = 0; i < dfs.size(); i++) {
        cout << dfs[i] << " ";
    }
    cout << endl;
    
    return;
}