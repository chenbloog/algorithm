//657机器人能否返回原点
#include <string>
using namespace std;
bool judgeCircle(string moves)
{
	int x = 0, y = 0;
	int i = 0;
	while (moves[i] != '\0')
	{
		switch (moves[i])
		{
		case 'R':
			x++;
			break;
		case 'L':
			x--; 
			break;
		case 'U':
			y++; 
			break;
		case 'D':
			y--; 
			break;
		}
		i++;
	}
	return x == 0 && y == 0;
}