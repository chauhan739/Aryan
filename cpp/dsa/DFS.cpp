// chauhan739's boilerplate for competetive programming
// press F9 to compile

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;
const int N = 1e5;

using namespace std;

vector<int> graph[N];
vector<bool> vis(N, false);
void DFS(vector<int> source){
  

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ui test;
  cin >> test;
  while(test--){
    int n, m;
    cin >> n >> m;
    while(m--){
      int v1, v2;
      cin >> v1 >> v2;
      graph[v1].push_back(v2);
      graph[v2].push_back(v1);
    }
    
  }
  return 0;
}

