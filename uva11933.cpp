#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <bitset>
using namespace std;
int main() {
    int n;
    while(scanf("%d", &n) == 1 && n != 0) {
        bitset<32> bin(n);
        bitset<32> a(0);
        bitset<32> b(0);
        bool flipA = true;
        for(int i=0; i<32; i++) {
            if(bin[i]) {
                if(flipA) {
                    a.set(i, 1);
                    flipA = false;
                }
                else {
                    b.set(i,1);
                    flipA = true;
                }
            }
        }
        printf("%d %d\n",a.to_ulong(),b.to_ulong());
    }
}
