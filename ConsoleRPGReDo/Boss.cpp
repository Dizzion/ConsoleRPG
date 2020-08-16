#include "Boss.h"

Boss::Boss(int level)
{
	this->level = level;
	this->hpMax = rand() % (level * 15) + (level * 2);
	this->hp = this->hpMax;
	this->damageMin = this->level * 2;
	this->damageMax = this->level * 4;
	this->dropChance = rand() % 100 + 1;
	this->defence = rand() % level * 7 + 1;
	this->accuracy = rand() % level * 5 + 1;
}

Boss::~Boss()
{

}

std::string Boss::getAsString()const
{
	return "Level: " + std::to_string(this->level) + "\n" +
		"Hp: " + std::to_string(this->hp) + " / " + std::to_string(this->hpMax) + "\n" +
		"Damage: " + std::to_string(this->damageMin) + " / " + std::to_string(this->damageMax) + "\n" +
		"Defence: " + std::to_string(this->defence) + "\n" +
		"Accuracy: " + std::to_string(this->accuracy) + "\n" +
		"Drop Chance: " + std::to_string(this->dropChance) + "\n";
}

void Boss::takeDamage(int damage)
{
	this->hp -= damage;

	if (this->hp <= 0)
	{
		this->hp = 0;
	}
}
