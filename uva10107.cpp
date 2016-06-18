#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;
int main() {
	long long val;
	vector<long long> nums;
	int count = 0;
	while(scanf("%lld", &val) == 1) {
		count++;
		nums.push_back(val);
		long long med;
		int a = count/2;
		int b = count/2 - 1;
		if(count % 2 == 1) {
			nth_element(nums.begin(), nums.begin() + a, nums.end());
			med = nums[a];
		}
		else {
			nth_element(nums.begin(), nums.begin() + a, nums.end());
			nth_element(nums.begin(), nums.begin() + b, nums.end());
			med = (nums[a] + nums[b]) / 2;
		}
		printf("%lld\n", med);
	}
}
