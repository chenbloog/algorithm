//缺失的第一个正数
#include<vector>
using namespace std;
int firstMissingPositive(vector<int>& nums)
{
	int ans = 1;
	int i = 0;
	int min = nums[0];
	while (i < nums.size)
	{
		if (nums[i] < 1)
			i++; continue;
		min = min < nums[i] ? min = nums[i];
		if (ans == nums[i])
		{
			ans=ans<
		}
	}


}
