#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <climits>
#include <set>
using namespace std;

vector<int> dist;
 struct lstDist {
    bool operator()(int u, int v) const {
      return make_pair(dist[u], u) <  make_pair(dist[v], v);
    }
  };

class Graph {
  int N;
  vector<vector<int>> weights;
  int S;

  public:
    Graph( int n )
        : N{n}, weights(N, vector<int>(N, -1)){}

    void addEdge( int x, int y, int w) {
        if (weights[x-1][y-1] == -1 || (weights[x-1][y-1] != -1 && weights[x-1][y-1] > w )) {
            weights[x-1][y-1] = w;
            weights[y-1][x-1] = w;
        }
    }
    void setStart(int s) {
        S = s-1;
        dist[S] = 0;
    }

    void distance() {
        set<int, lstDist> q;
        q.insert(S);
        while(!q.empty()) {
            int u = *q.begin();
            q.erase(q.begin());
            for( int v = 0; v < N ; ++v ) {
               if (weights[u][v] != -1) {
                   int newDist = dist[u] + weights[u][v];
                   if (newDist < dist[v]) {
                       dist[v] = newDist;
                       if (q.count(v)) {
                           q.erase(v);
                       }
                       q.insert(v);
                   }
               }
            }
        }
    }

    void printDistance() {
        for ( unsigned  int i = 0; i < dist.size(); ++i ) {
            if ( int(i) != S) {
                if (dist[i] == INT_MAX) dist[i] = -1;
                std::cout << dist[i] << " ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    int T, N, M, x, y, w, S;
    cin >> T;
    while( T ) {
        cin >> N >> M;
        dist.resize(N);
        for( int i = 0; i < N; ++i) {
            dist[i] = INT_MAX;
        }
        Graph G(N);
        for ( int i = 0; i < M; ++i) {
            cin >> x >> y >> w;
            G.addEdge(x, y, w);
        }
        cin >> S;
        G.setStart(S);
        G.distance();
        G.printDistance();
        --T;
    }
    return 0;
}