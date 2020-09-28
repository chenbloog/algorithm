//寻找两个正序数组的中位数

#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	if (nums1.size() > nums2.size())
		return findMedianSortedArrays(nums2, nums1);
	int lo = 0;
	int hi = nums1.size();
	int mid1, mid2;
	int Aim, Ai, Bjm, Bj;
	while (lo <= hi)
	{
		int i = (lo + hi) / 2;
		int j = (nums1.size() + nums2.size() + 1) / 2 - i;
		Aim = i == 0 ? INT_MIN : nums1[i - 1];                  //A[i-1]
		Ai = i == nums1.size() ? INT_MAX : nums1[i];            //A[i]
		Bjm = j == 0 ? INT_MIN : nums2[j - 1];                  //B[j-1]
		Bj = j == nums2.size() ? INT_MAX : nums2[j];            //B[j]
		if (Aim <= Bj && Bjm <= Ai)
			break;
		else if (Aim > Bj)
			hi = i - 1;
		else if (Bjm > Ai)
			lo = i + 1;
	}
	mid1 = Aim < Bjm ? Bjm : Aim;
	mid2 = Ai < Bj ? Ai : Bj;
	return (nums1.size() + nums2.size()) % 2 == 0 ? (mid1 + mid2) / 2.0 : mid1;
}