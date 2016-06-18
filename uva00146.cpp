#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
int main() {
	string word;
	while(true) {
		getline(cin, word);
		if(word[0] == '#') break;
		if(next_permutation(word.begin(), word.end())) printf("%s\n", word.c_str());
		else printf("No Successor\n");
	}
}
