#include "room.h"


room::room()
{
	tray = false, bowl = false, toys = false;
}

bool room::GetTray()
{
	return tray;
};
bool room::GetBowl()
{
	return bowl;
};
bool room::GetToys()
{
	return toys;
};
bool room::SetTray(bool tray)
{
	this->tray = tray;
	return this->tray;
};
bool room::SetBowl(bool bowl)
{
	this->bowl = bowl;
	return this->bowl;
};
bool room::SetToys(bool toys)
{
	this->toys = toys;
	return this->toys;
};

room::~room()
{
}
