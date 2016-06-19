#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <bitset>

using namespace std;
int main() {
    int n, m;
     while(scanf("%d %d", &n, &m) == 2 && (n!=0 || m!=0)) {
        bitset<1000000> times(0);
        bool valid = 1;
        for(int i=0; i<n; i++) {
            int start, end;
            scanf("%d %d", &start, &end);
            for(int j=start; j<end; j++) {
                if(times[j] == 1)
                    valid = 0;
                else
                    times.flip(j);
            }
        }
        for(int i=0; i<m; i++) {
            int start, end, rep;
            scanf("%d %d %d", &start, &end, &rep);
            while(start < 1000000) {
                for(int j=start; j<end && j<1000000; j++) {
                    if(times[j] == 1)
                        valid = 0;
                    else
                        times.flip(j);
                }
                start += rep;
                end += rep;
            }
        }
        if(valid == 1)
            printf("NO CONFLICT\n");
        else
            printf("CONFLICT\n");
     }
}
