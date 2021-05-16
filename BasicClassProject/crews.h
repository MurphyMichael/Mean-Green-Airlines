//this is the crews class header file
#ifndef __CREWS_H__
#define __CREWS_H__

#include "crew.h"
#include "pilot.h"
#include "copilot.h"
#include "cabin.h"

class Crews{

private:
	vector<CrewMember*> crews;
	
public:
	Crews() {};
	~Crews() {};
	void AddCrewMember();
	void EditCrewMember();
	void DeleteCrewMember(int ID);
	void PrintAllCrewMembers();
	void PrintOneCrewMember();
	CrewMember * SearchByID(int ID);
	void SaveCrewData();
	void LoadCrewData();
	
	// All the functions needed to manipulate the crews class object
};







#endif