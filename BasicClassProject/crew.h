//this is the file for my crew class
/*
	I used Prof. Keathy's Order Entry Split Vec to help me code this program

	the file is: OrderEntrySplitVec-1.zip in modual 9
*/
#ifndef __CREW_H__
#define __CREW_H__

#include "header.h"

class CrewMember{

private:
	string type;
	string name;
	int ID;
	string status; //ie: available, on leave sick
public:
	CrewMember();
	~CrewMember() {};
	string GetType() const {return type;};
	void SetType(string type) {this->type = type;};
	string GetName() const {return name;};
	void SetName(string name) {this->name = name;};
	int GetID() const {return ID;};
	void SetID(int ID) {this->ID = ID;};
	string GetStatus() const {return status;};
	void SetStatus(string status) {this->status = status;};
	virtual void PrintInfo();
	friend ostream& operator<<(ostream& out, CrewMember& crew);


	// All the sets and gets for the crew class
};







#endif