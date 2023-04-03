#include "cat.h"
#include <string>
#include <iostream>

//где сейчас выводится текстом, потом нужно будет добавить графику
Cat::Cat(std::string name)
{
	this->name = name;
	hunger = 0;
	happinnes = 50;
	poop_lvl = 0;
	energy = 100;
};
int Cat::SetEnergy(int energy)
{
	this->energy = energy;
	return this->energy;
};
bool Cat::GetSleep()
{
	return sleep;
}
int Cat::GetHunger()
{
	return hunger;
}
int Cat::GetHappinnes()
{
	return happinnes;
}
int Cat::GetPoop_lvl()
{
	return poop_lvl;
}
int Cat::GetEnergy()
{
	return energy; //геттеры
}

int Cat::eat() //покушац
{
	std::cout << name+ " eats" << std::endl;
	return hunger -= 10;
	
}

int Cat::pet()
{
	if (hunger <= 50 && poop_lvl <= 50)
		return happinnes += 10;
	else
	{
		return happinnes += 1;
	}
	std::cout << "You petting the " + name << std::endl;
}

int Cat::poop() //покакац
{
	return poop_lvl = 0;
	std::cout << name + " poops" << std::endl;
}

void Cat::play() //поиграц
{
	happinnes += 20;
	hunger += 10;
	energy -= 10;
	std::cout << name+ " plays" << std::endl;
}

void Cat::live() //жизненный цикл
{
	energy -= 5;
	hunger += 10;
	happinnes -= 5;
	if (hunger < 35)
		poop_lvl += 15;
	if (energy == 0)
		sleep = true;
	if (energy == 100)
		sleep = false;

	std::cout << name+ " lives" << std::endl;
}



void Cat::mood() //отображение настроения
{
	if (happinnes <= 25)
	{
		std::cout << sad << std::endl;
	}
	else if (happinnes > 25 && happinnes < 75)
	{
		std::cout << neutral << std::endl;
	}
	else
	{
		std::cout << happy << std::endl;
	}

}

bool Cat::sleeping()
{
	energy += 100;
	std::cout << name + " is sleeping" << std::endl;
	return sleep = false;
}

Cat::~Cat()
{
}
