#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
	long long size, pos, x, y, center; // The numbers can get pretty big, have to watch out and use long long
	while((scanf("%lld %lld", &size, &pos) == 2) && ((size != 0) || (pos != 0))) {
		long long innersq = 1;
		long long center = (size / 2) + 1;
		if(pos == 1) {
			x = center;
			y = center;
		}
		else {
			while(pos > ((innersq + 2) * (innersq+2))) {
				innersq += 2;
			}
			long long elen = innersq + 1;
			long long spot = pos - (innersq * innersq) - 1;
			long long edge = spot / elen;
			long long espot = spot % elen;
			switch (edge) {
				case 0:
					y = (center + (innersq/2) + 1);
					x = (center + (innersq/2) - espot);
					break;
				case 1:
					y = (center + (innersq/2) - espot);
					x = (center - (innersq/2) - 1);
					break;
				case 2:
					y = (center - (innersq/2) - 1);
					x = (center - (innersq/2) + espot);
					break;
				case 3:
					y = (center - (innersq/2) + espot);
					x = (center + (innersq/2) + 1);
					break;
			}
		}
		printf("Line = %lld, column = %lld.\n", y, x);
	}
}
