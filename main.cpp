#include <iostream>
#include<conio.h>

using namespace std;

class Character
{
	bool Moveable = true;
};

//Character
class Player : public Character
{
	bool CanAttackMonster = true;
	int HP = 100;
	int MP = 100;
};

class Monster : public Character
{
	bool CanAttackPlayer = true;
};

//Monster
class Slime : public Monster
{

};

class Goblin : public Monster
{

};

class WildBoar : public Monster
{

};

int main()
{
	// �ּ� �߰� 1
	// �ּ� �߰� 2
	
	return 0;
}