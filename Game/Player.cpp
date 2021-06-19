#include "Player.h"

Player::Player(const std::string& name, int health, int mana) {
	this->name = name;
	this->mana = mana;
	this->health = health;
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

void Player::setName(const std::string& name)
{
	this->name = name;
}

void Player::setHealth(int health) {
	this->health = health;
}

void Player::setMana(int mana)
{
	this->mana = mana;
}
