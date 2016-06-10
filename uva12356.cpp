#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
	int solds, lr;
	scanf("%d %d", &solds, &lr);
	while(solds != 0 && lr != 0) {
		int left[solds+2], right[solds+2];
		left[0] = left[solds+1] = right[0] = right[solds+1] = -1;
		for(int i=1; i<solds; i++) {
			left[i] = i-1;
			right[i] = i+1;
		}
		left[1] = -1;
		right[solds] = -1;
		for(int i=0; i<lr; i++) {
			int l, r;
			scanf("%d %d", &l, &r);
			if(left[l] == -1 && right[r] == -1) {
				printf("* *\n");
			}
			else if (left[l] == -1){
				left[right[r]] = -1;
				printf("* %d\n", right[r]);
			}
			else if (right[r] == -1) {
				right[left[l]] = -1;
				printf("%d *\n", left[l]);
			}
			else {
				left[right[r]] = left[l];
				right[left[l]] = right[r];
				printf("%d %d\n", left[l], right[r]);
			}
		}
		printf("-\n");
		scanf("%d %d", &solds, &lr);
	}
}
