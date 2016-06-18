#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
	int cases, num, vals[5][5], newvals[5][5], sum, index;
	scanf("%d",&cases);
	for(int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			vals[i][j] = newvals[i][j] = 0;
		}
	}
	for(int k=0; k<cases; k++) {
		index = -1, sum=0;
		for(int i=1; i<4; i++) {
			scanf("%d", &num);
			for(int j=3; j>=1; j--) {
				vals[i][j] = num % 10;
				num = num / 10;
				sum += vals[i][j];
			}
		}
		while(sum != 0) {
			sum = 0;
			index++;
			for(int i=1; i<4; i++) {
				for(int j=1; j<4; j++) {
					newvals[i][j] = (vals[i-1][j] + vals[i+1][j] + vals[i][j-1] + vals[i][j+1])%2;
					sum += newvals[i][j];
				}
			}
			for(int i=1; i<4; i++) {
				for(int j=1; j<4; j++) {
					vals[i][j] = newvals[i][j];
				}
			}
		}
		printf("%d\n",index);
	}
}
