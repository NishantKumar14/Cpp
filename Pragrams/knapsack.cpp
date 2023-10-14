// Implemnt fractional knapsack problem.

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int fractionalKnapsack(vector<int>& profit, vector<int>& weight, int num, int cap) {
    vector<pair<int, int> >v;
    for (int i = 0; i < num; i++) {
        v.push_back({(float)profit[i] / weight[i], i});
    }
    sort(v.begin(), v.end());
    int top = 0;
    for (int i = 0; i < num; i++) {
        if (cap > 0 && weight[i] <= cap) {
            cap -= weight[i];
            top += profit[i];
        }
        else {
            break;
        }
    }
    return top;
}

int main() {
    int n;
    cout << "Enter the size : ";
    cin >> n;
    vector<int> profit;
    cout << "\nEnter the Profit Element : ";
    for (int i = 0; i < n; i++) { 
        cin >> profit[i];
    }
    
    vector<int> weight;
    cout << "\nEnter the Weight Element : ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    int m;
    cin >> m;
    cout << fractionalKnapsack(profit, weight, n, m);
    return 0;
} 
