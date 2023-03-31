#include <iostream>

using namespace std;

int main()
{
	int Map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	};


	while (true)
	{
		int PlayerX = 1;
		int PlayerY = 1;

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "# ";
				}
				else if (Map[Y][X] == 0)
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		system("cls"); // 지우기, 실제로는 사용X, cls 대신 다른걸 쓸 수 있어서 해킹당함
	}
	
	return 0;
}