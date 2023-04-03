#include "cat.h"
#include "room.h"
#include <iostream>
#include <string>


int main()
{
	std::string name;
	std::cin >> name;
	Cat Tom(name);
	room home;
	while (Tom.GetHappinnes()>0)
	{
		Tom.mood();
		Tom.live();
		
		if (home.GetBowl() && Tom.GetHunger() > 10)
		{
			Tom.eat();
			home.SetBowl(false);
		}

		if (home.GetToys() && Tom.GetEnergy() > 10 && Tom.GetHunger() < 100)
			Tom.play();

		if (home.GetTray() == false && Tom.GetPoop_lvl() > 50)
		{
			Tom.poop();
			home.SetTray(true);
		}
		
		if (Tom.GetSleep())
		{
			Tom.sleeping();
		}
	}
	return 0;
}