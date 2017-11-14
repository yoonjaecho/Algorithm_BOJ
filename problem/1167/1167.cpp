#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <sstream>
#include <cstring>
#define PII pair<int, int>
using namespace std;
int V, u, v, w, max_dist = -1e9, start;
vector<PII> g[100001];
bool check[100001];
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while(getline(ss, item, delim))
        tokens.push_back(item);
    return tokens;
}
void bfs(int node) {
    queue<PII> q; q.push({node, 0});
    while(!q.empty()) {
        PII cur = q.front(); q.pop();
        check[cur.first] = 1;
        for(PII adj:g[cur.first]) {
            if(!check[adj.first]) {
                int new_dist = cur.second + adj.second;
                if(max_dist < new_dist) {
                    max_dist = new_dist;
                    start = adj.first;
                }
                q.push({adj.first, new_dist});
            }
        }
    }
}
int main() {
    cin >> V; cin.ignore();
    for(int i=0; i<V; i++) {
        string in; getline(cin, in);
        vector<string> info = split(in, ' ');
        for(int i=1; i<info.size()-1; i+=2)
            g[stoi(info[0])].push_back({stoi(info[i]), stoi(info[i+1])});
    }
    bfs(1);
    memset(check, 0, sizeof(check));
    max_dist = 0;
    bfs(start);
    cout << max_dist << endl;
}