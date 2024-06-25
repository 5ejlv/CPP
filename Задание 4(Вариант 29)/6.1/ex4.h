#pragma once
#include <iostream>
#include <string>

class Room 
{
protected:
	double length;
	double width;
	double height;
public:
	Room(double l = 0, double w = 0, double h = 0);
	Room(const Room& obj);
	~Room();
	double getWallsArea();
	double getWallsAreaExcludeDoorAndWindows();
	double getFloorArea();
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

class Office : public Room
{
private:
	int numOfRooms;
	double areaOfHall;
	double paintConsumption;
public:
	Office(double l = 0, double w = 0, double h = 0, int numOfRooms = 0, double hallArea = 0, double paintConsume = 0);
	Office(const Office& obj);
	~Office();
	double paintPerRoomExcludeWindows();

	Office operator= (const Office& obj)
	{
		return Office(length, width, height, numOfRooms, areaOfHall, paintConsumption);
	}

	bool operator== (const Office& obj)
	{
		if (obj.length == length && obj.height == height && obj.width == width && obj.numOfRooms == numOfRooms && obj.areaOfHall == areaOfHall && obj.paintConsumption == paintConsumption)
			return true;
		return false;
	}

	friend std::ostream& operator<< (std::ostream& os, Office const& s)
	{
		return os << s.length << '\n' << s.width << '\n' << s.height << '\n' << s.numOfRooms << '\n';
	}

	friend std::istream& operator>> (std::istream& is, Office& s)
	{
		return is >> s.length >> s.width >> s.height;
	}
};
