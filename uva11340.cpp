#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;
int main() {
	int cases;
	scanf("%d",&cases);
	for(int i=0; i<cases; i++) {
		int chars;
		map<char,int> vals;
		scanf("%d", &chars);
		for(int j=0; j<chars; j++) {
			char curchar;
			int curval;
			scanf("\n%c %d", &curchar, &curval);
			vals[curchar] = curval;
		}
		int lines;
		scanf("%d\n",&lines);
		int totalval = 0;
		char theline[10010];
		for(int j=0; j<lines; j++) {
			fgets(theline, 10010, stdin);
			int k=0;
			while(theline[k] != 0) {
				totalval += vals[theline[k]];
				k++;
			}
		}
		int dollars = totalval / 100;
		int cents = totalval % 100;
		printf("%d.%02d$\n",dollars,cents);
	}
}
