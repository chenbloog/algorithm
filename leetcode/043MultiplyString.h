//×Ö·û´®Ïà³Ë
#include<iostream>
#include<string>

using std::string;

string multiply(string num1, string num2)
{
	if (num1 == "0" || num2 == "0")
		return "0";
	else if (num1 == "1" || num2 == "1")
		return num1 == "1" ? num2 : num1;
	string ans;
	int i = 0;
	int m = num1.length() > num2.length() ? num2.length() : num1.length();
	int n = num1.length() + num2.length() - m;
	int result = 0;
	int add = 0;
	while (i < m + n - 1)
	{
		if (i < m)
		{
			for (int j = 0; j <= i; j++)
			{
				int a = num1.length() < num2.length() ? num1[m - 1 - j] - '0' : num2[m - 1 - j] - '0';
				int b = num1.length() < num2.length() ? num2[n - 1 + j - i] - '0' : num1[n - 1 + j - i] - '0';
				result += a * b;
			}
		}
		else if (i < n)
		{
			for (int j = 0; j < m; j++)
			{
				int a = num1.length() < num2.length() ? num1[m - 1 - j] - '0' : num2[m - 1 - j] - '0';
				int b = num1.length() < num2.length() ? num2[n - 1 + j - i] - '0' : num1[n - 1 + j - i] - '0';
				result += a * b;
			}
		}
		else
		{
			for (int j = m - 1; i - n < j; j--)
			{
				int a = num1.length() < num2.length() ? num1[m - 1 - j] - '0' : num2[m - 1 - j] - '0';
				int b = num1.length() < num2.length() ? num2[n - 1 + j - i] - '0' : num1[n - 1 + j - i] - '0';
				result += a * b;
			}
		}
		result += add;
		ans.push_back('0' + result % 10);
		add = result / 10;
		result = 0;
		i++;
	}
	while (add != 0)
	{
		ans.push_back('0' + add % 10);
		add /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;

}

