#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <bitset>
#include <vector>

using namespace std;

vector<int> getAdj(int corner, int dimen) {
    vector<int> adj;
    bitset<16> c(corner);
    for(int i=0; i<dimen; i++) {
        c.flip(i);
        adj.push_back(c.to_ulong());
        c.flip(i);
    }
    return adj;
}

int main() {
    int n, corners;
    while(scanf("%d",&n) == 1) {
        corners = pow(2, n);
        int cvals[corners];
        for(int i=0; i<corners; i++) {
            scanf("%d",&cvals[i]);
        }
        int max = 0;
        for(int i=0; i<corners; i++) {
            vector<int> adj = getAdj(i, n);
            for(int j=0; j<adj.size(); j++) {
                vector<int> adj2 = getAdj(adj[j],n);
                int sum = 0;
                for(int k=0; k<adj.size(); k++) {
                    sum += cvals[adj[k]];
                    sum += cvals[adj2[k]];
                }
                if(sum > max)
                    max = sum;
            }
        }
        printf("%d\n", max);
    }
}
