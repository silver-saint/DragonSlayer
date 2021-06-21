#include <Logic/Player.h>

Player::Player(const std::string& pname, int phealth, int pmana) {
	name = pname;
	mana = pmana;
	health = phealth;
}

std::string Player::getName()
{
	return name;
}

int Player::getHealth()
{
	return health;
}

int Player::getMana()
{
	return mana;
}

void Player::setName(const std::string& pname)
{
	name = pname;
}

void Player::setHealth(int phealth) {
	health = phealth;
}

void Player::setMana(int pmana)
{
	mana = pmana;
}
