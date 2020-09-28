//557反转字符串中的单词 III

#include<iostream>
#include<string>
using namespace std;

string reverseWords(string s)
{
	int j = 0;
	for (int i = 0; i < s.length()+1; i++)
	{
		if (s[i] == ' '||s[i] == '\0')
		{
			for (int k = i - 1; j < k; j++, k--)
				swap(s[j], s[k]);
			j = i + 1;
		}
	}
	return s;
}
