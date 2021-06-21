#pragma once
#include <Core/Core.h>

class Player {
public:
	Player() = delete;
	Player(const std::string& pname, int phealth, int pmana);
	std::string getName();
	int getHealth();
	int getMana();
	void setName(const std::string& pname);
	void setHealth(int phealth);
	void setMana(int pmana);
	~Player() = default;
private:
	std::string name;
	int health;
	int mana;
};