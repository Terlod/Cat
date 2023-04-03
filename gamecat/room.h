#pragma once
class room
{
public:
	room();
	bool GetTray();
	bool GetBowl();
	bool GetToys();
	bool SetTray(bool tray);
	bool SetBowl(bool bowl);
	bool SetToys(bool toys);

	~room();
private:
	bool tray, bowl, toys;

};

