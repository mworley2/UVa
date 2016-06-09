/*
 * uva00462.cpp
 *
 *  Created on: Jun 5, 2016
 *      Author: mworley2
 */
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;
int main() {
	std::map<char, int>suitConversion;

	suitConversion['S'] = 0;
	suitConversion['H'] = 1;
	suitConversion['D'] = 2;
	suitConversion['C'] = 3;

	char reverse[4] = {'S', 'H', 'D', 'C'};

	bool ace[4], king[4], queen[4], jack[4], stopped[4];
	int count[4], points, bonuspoints, suit, maxsuit, maxcount;

	char temp[3];

	while (scanf("%s", temp) == 1) {
		for(int i=0; i<4; i++) {
			ace[i] = king[i] = queen[i] = jack[i] = stopped[i] = false;
			count[i] = 0;
		}
		points = bonuspoints = 0;
		maxsuit = maxcount = -1;
		for(int i=0; i<13; i++) {
			if(i!=0)
				scanf("%s",temp);
			suit = suitConversion[temp[1]];
			count[suit]++;
			switch(temp[0]) {
			case 'A':
				ace[suit] = true;
				points += 4;
				break;
			case 'K':
				king[suit] = true;
				points += 3;
				break;
			case 'Q':
				queen[suit] = true;
				points += 2;
				break;
			case 'J':
				jack[suit] = true;
				points++;
				break;
			}
		}

		for(int i=0; i<4; i++) {
			if(ace[i])
				stopped[i] = true;
			if(king[i] && count[i] < 2)
				points--;
			else if(king[i])
				stopped[i] = true;
			if(queen[i] && count[i] < 3)
				points--;
			else if(queen[i])
				stopped[i] = true;
			if(jack[i] && count[i] < 4)
				points--;
			if(count[i] == 2)
				bonuspoints++;
			else if(count[i] == 1)
				bonuspoints+=2;
			else if(count[i] == 0)
				bonuspoints+=2;
			if(count[i] > maxcount) {
				maxsuit = i;
				maxcount = count[i];
			}
		}

		bool allstopped = stopped[0] && stopped[1] && stopped[2] && stopped[3];

		if(points + bonuspoints < 14)
			printf("PASS\n");
		else if(points >= 16 && allstopped)
			printf("BID NO-TRUMP\n");
		else {
			printf("BID %c\n", reverse[maxsuit]);
		}
	}
}
