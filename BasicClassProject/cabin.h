//cabin.h
#ifndef __CABIN_H__
#define __CABIN_H__
#include "crew.h"

class Cabin : public CrewMember{

private:
	string position; //ie: lead, first class, buisness, economy front, economy rear.
public:
	Cabin(string position, string type, string name, int ID, string status);
	string GetPosition() const {return position;};
	void SetPosition(string position) {this->position = position;};
	void PrintInfo();
};

#endif