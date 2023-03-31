#include <iostream>
#include<conio.h>

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

	int PlayerX = 1;
	int PlayerY = 1;
	bool bIsRunning = true;

	while (true) //GameLoop
	{

		//Frame 한 장을 그린다
		
		//어떤 엔진이든 하는 3가지
		//Input();
		char Key;
		Key = _getch();
		//Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 'q')
		{
			bIsRunning = false;
		}

		//Render();
		system("cls");  // 지우기, 실제로는 사용X, cls 대신 다른걸 쓸 수 있어서 해킹당함

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
	}
	
	return 0;
}