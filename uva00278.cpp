#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int cases;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++) {
		char piece;
		int rows, cols;
		scanf("\n%c %d %d", &piece, &rows, &cols);
		switch(piece) {
		case 'r':
			printf("%d\n",min(rows, cols));
			break;
		case 'k':
			printf("%d\n",(rows * cols + 1)/2);
			break;
		case 'Q':
			printf("%d\n",min(rows, cols));
			break;
		case 'K':
			printf("%d\n",((rows + 1)/2)*((cols+1)/2));
			break;
		}
	}
}
