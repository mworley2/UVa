#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

int main() {
	int n;
	int cur, prev;
	bool isJolly;
	while(scanf("%d",&n) == 1) {
		isJolly = true;
		bool jolly[n];
		for(int i=0; i<n; i++) jolly[i] = false;
		scanf("%d", &cur);
		for(int i=1; i<n; i++) {
			prev = cur;
			scanf("%d", &cur);
			jolly[abs(cur-prev) - 1] = true;
		}
		for(int i=0; i<n-1; i++)
			if(!jolly[i])
				isJolly = false;
		if(isJolly)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
}
