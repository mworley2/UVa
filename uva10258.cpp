#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;
int main() {
	int cases;
	int data[101][10][2];
	int part[101];
	string input;
	int linenum = 3;
	getline(cin, input);
	sscanf(input.c_str(), "%d", &cases);
	getline(cin, input);


	for(int i=0; i<cases; i++) {
		for(int j=0; j<101; j++) {
			part[j] = 0;
			for(int k=0; k<10; k++) {
				data[j][k][0] = 0;
				data[j][k][1] = -1;
			}
		}
		while(getline(cin, input)) {
		    linenum++;
		    if(input.empty()) break;
			int cont, prob, t;
			char let;
			sscanf(input.c_str(), "%d %d %d %c", &cont, &prob, &t, &let);
			part[cont] = 1;
			if(let == 'C' && data[cont][prob][1] == -1) {
				data[cont][prob][1] = t;
			}
			if (let == 'I' && data[cont][prob][1] == -1) {
				data[cont][prob][0]++;
			}
		}
		vector<tuple<int, int, int>>rank;
		for(int j=0; j<101; j++) {
			if (part[j] == 1) {
                int score = 0;
                int time = 0;
                for(int k=0; k<10; k++) {
                    if(data[j][k][1] != -1) {
                        score++;
                        time += data[j][k][0] * 20 + data[j][k][1];
                    }
                }
                rank.push_back(make_tuple(j,score,time));
            }
		}
        sort(rank.begin(), rank.end(), [](tuple<int, int, int> const &a, tuple<int, int, int> const &b)->bool 
            {
                if(get<1>(a) != get<1>(b)) 
                    return get<1>(a) > get<1>(b);
                else if(get<2>(a) != get<2>(b))
                    return get<2>(a) < get<2>(b);
                else 
                    return get<0>(a) < get<0>(b);
            });
        for(int j=0; j<rank.size(); j++) {
            printf("%d %d %d\n", get<0>(rank[j]), get<1>(rank[j]), get<2>(rank[j]));
        }
        if(i != cases - 1)
            printf("\n");
	}
}
