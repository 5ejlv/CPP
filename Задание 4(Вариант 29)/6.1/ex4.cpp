#include <string>

#include "ex4.h"
using namespace std;

double Room::getWallsArea() {
	return length * height * 2.0 + width * height * 2.0;
}

double Room::getWallsAreaExcludeDoorAndWindows() {
	return (length * height * 2.0 + width * height * 2.0) - (2.0 * 15.0) - (2.0 * 8.0);
}

double Room::getFloorArea() {
	return(length * width);
}

string Room::printInfo() {
	string str;
	str = "Ширина: " + to_string(width) + "Длина: " + to_string(length) + "Высота: " + to_string(height);
	return str;
}

Room::Room(double l, double w, double h) {
	length = l;
	width = w;
	height = h;
}

Room::Room(const Room& obj)
{
	length = obj.length;
	width = obj.width;
	height = obj.height;
}

Room::~Room()
{
	std::cout << "Объект уничтожен \n";
}

Office::Office(double l, double w, double h, int roomsCount, double hallArea, double paintConsume) {
	length = l;
	width = w;
	height = h;
	numOfRooms = roomsCount;
	areaOfHall = hallArea;
	paintConsumption = paintConsume;
}

Office::Office(const Office& obj)
{
	length = obj.length;
	width = obj.width;
	height = obj.height;
	numOfRooms = obj.numOfRooms;
	areaOfHall = obj.areaOfHall;
	paintConsumption = obj.paintConsumption;
}

Office::~Office()
{
	std::cout << "Объект офиса уничтожен \n";
}

double Office::paintPerRoomExcludeWindows()
{
	return (numOfRooms * (getWallsAreaExcludeDoorAndWindows() + getFloorArea()) + areaOfHall) / paintConsumption;
}