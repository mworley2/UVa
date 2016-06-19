#include <algorithm>
#include <cstdio>
#include <cstring>
#include <list>
#include <string>
#include <iostream>

using namespace std;
int main() {
    string input;
    while(getline(cin, input)) {
        if(input.empty()) break;
        list<char> out;
        list<char>::iterator pos = out.begin();
        bool atEnd = true;
        for(int i=0; i<input.length(); i++) {
            if(input[i] == '[') {
                atEnd = false;
                pos = out.begin();
            }
            else if(input[i] == ']') {
                atEnd = true;
                pos = out.begin();
            }
            else {
                if(atEnd) {
                    out.push_back(input[i]);
                }
                else {
                    out.insert(pos, input[i]);
                }
            }
        }
        for(list<char>::iterator poss = out.begin(); poss != out.end(); poss++) {
            printf("%c", *poss);
        }
        printf("\n");
    }
}
