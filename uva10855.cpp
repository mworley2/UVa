#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
char big[500][500], small[500][500];

void rotate(int m) {
	char temp[m][m];
	for(int i=0; i<m; i++) {
		for(int j=0; j<m; j++) {
			temp[i][j] = small[m-j-1][i];
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<m; j++) {
			small[i][j] = temp[i][j];
		}
	}
}

int main() {
	int n, m;
	int count[4];
	while(scanf("%d %d",&n,&m) == 2) {
		if(n == 0 && m == 0)
			break;
		for(int i=0; i<n; i++) {
			scanf("%s", big[i]);
		}
		for(int i=0; i<m; i++) {
			scanf("%s", small[i]);
		}
		for(int i=0; i<4; i++) {
			count[i] = 0;
			for(int j=0; j<=n-m; j++) {
				for(int k=0; k<=n-m; k++) {
					bool isvalid = true;
					for(int a=j; a<j+m; a++) {
						for(int b=k; b<k+m; b++) {
							if(small[a-j][b-k] != big[a][b])
								isvalid = false;
						}
					}
					if(isvalid)
						count[i]++;
				}
			}
			rotate(m);
		}
		printf("%d %d %d %d\n", count[0],count[1],count[2],count[3]);
	}
}
