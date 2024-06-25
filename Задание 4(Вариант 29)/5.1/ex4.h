#pragma once
#include <iostream>
#include <string>

class Room 
{
private:
	double length;
	double width;
	double height;
public:
	Room(double l = 0, double w = 0, double h = 0);
	Room(const Room& obj);
	~Room();
	double getWallsArea();
	double getWallsAreaExcludeDoorAndWindows();
	std::string printInfo();

	Room operator= (const Room& obj)
	{
		return Room(length, width, height);
	}

	bool operator== (const Room& obj)
	{
		if (obj.length == length && obj.height == height && obj.width == width)
			return true;
		return false;
	}

	friend std::ostream& operator<< (std::ostream& os, Room const& s)
	{
		return os << s.length << '\n' << s.width << '\n' << s.height << '\n';
	}

	friend std::istream& operator>> (std::istream& is, Room & s)
	{
		return is >> s.length >> s.width >> s.height;
	}
};