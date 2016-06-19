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
	int data[100][9][2];
	int part[100];
	string input;
	getline(cin, input);
	sscanf(input.c_str(), "%d", &cases);
	getline(cin, input);


	for(int i=0; i<cases; i++) {
		for(int j=0; j<100; j++) {
			part[j] = 0;
			for(int k=0; k<9; k++) {
				data[j][k][0] = 0;
				data[j][k][1] = -1;
			}
		}
		getline(cin, input);
		while(!input.empty()) {
			int cont, prob, t;
			char let;
			sscanf(input.c_str(), "%d %d %d %c", &cont, &prob, &t, &let);
			part[cont] = 1;
			if(let == 'C') {
				data[cont][prob][1] = t;
			}
			if (let == 'I') {
				data[cont][prob][0]++;
			}
			getline(cin, input);
		}
		vector<tuple<int, int, int>>rank;
		for(int j=0; j<100; j++) {
			if (part[j] == 1) {
                int score = 0;
                int time = 0;
                for(int k=0; k<9; k++) {
                    if(data[j][k][1] != -1) {
                        score++;
                        time += data[j][k][0] * 20 + data[j][k][1];
                    }
                }
                rank.push_back(make_tuple(j,score,time));
            }
		}
        sort(rank.begin(), rank.end(), [](auto const &a, auto const &b)->bool 
                {
                    if(get<1>a == get<1>b)
                        return get<2>a > get<2>b;
                    else
                        return get<1>a > get<1>b;
                });
        for(int j=0; j<rank.size(); j++) {
            printf("%d %d %d\n", get<0>(rank[j]), get<1>(rank[j]), get<2>(rank[j]));
        }
	}
}
