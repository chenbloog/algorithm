//214×î¶Ì»ØÎÄ´®

#include<string>
using std::string;

class solution
{
public:
	string shortestPalindrome(string s)
	{
		string ans;
		string rs = s;
		reverse(rs.begin(), rs.end());
		int i = 0;
		while (i < rs.length())
		{
			int j = i;
			int k = 0;
			while (j < rs.length())
			{
				if (rs[j] != s[k])
				{
					ans.push_back(rs[i]);
					break;
				}
				else
					j++; k++;
			}
			if (j < rs.length())
				i++;
			else
				break;
		}
		return ans + s;
	}
};


