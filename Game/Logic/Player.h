#pragma once
#include <iostream>
class Player
{
public:
	Player() = delete;
	Player(const std::string& name, int health, int mana);
	std::string getName();
	int getHealth();
	int getMana();
	void setName(const std::string& name);
	void setHealth(int health);
	void setMana(int mana);
	~Player() = default;
private:
	std::string name;
	int health;
	int mana;
	int damage;
};