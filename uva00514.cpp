#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;
int main() {
    int n;
    while(true) { 
        scanf("%d", &n);
        if(n == 0)
            break;
        while(true) {
            int vals[n];
            scanf("%d", &vals[0]);
            if(vals[0] == 0) {
                printf("\n");
                break;
            }
            for(int i=1; i<n; i++) {
                scanf("%d", &vals[i]);
            }
            int entering = 1, cur = 0;
            bool isvalid = true;
            stack<int> station;
            while (cur < n) {
                if(!station.empty() && station.top() == vals[cur]) {
                    station.pop();
                    cur++;
                }
                else if (vals[cur] >= entering){
                    while(entering <= vals[cur]) {
                        station.push(entering);
                        entering++;
                    }
                    station.pop();
                    cur++;
                }
                else {
                    isvalid = false;
                    break;
                }
            }
            if(isvalid)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
