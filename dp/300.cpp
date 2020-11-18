#include<iostream>
#include<vector>
#include<algorithm>
#define INF 0x7ffff
using namespace std;

int lengthOfLIS(vector<int>& nums) {
	int *dp = new int[nums.size()];
	for (int i = 0; i < nums.size(); ++i)
		dp[i] = INF;
	for (int i = 0; i < nums.size(); ++i)
		*lower_bound(dp, dp + nums.size(), nums[i]) = nums[i];
	return lower_bound(dp, dp + nums.size(), INF) - dp;
}

int main() {
	vector<int> a = { 10, 9, 2, 5, 3, 7, 101, 18 };
	cout << lengthOfLIS(a) << endl;
	system("pause");

}