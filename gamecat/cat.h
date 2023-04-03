#pragma once
#include <string>
#include <iostream>

class Cat
{
public:
	Cat(std::string name);
	bool GetSleep();
	int GetHunger();
	int GetHappinnes();
	int GetPoop_lvl();
	int GetEnergy();
	int SetEnergy(int energy);

	int eat();
	int pet();
	int poop();
	void play();
	void live();
	bool sleeping();

	void mood();
	~Cat();

private:
	std::string name, sad="sad", neutral="neutral", happy="happy";
	int hunger, happinnes, poop_lvl, energy;
	bool sleep;
};

