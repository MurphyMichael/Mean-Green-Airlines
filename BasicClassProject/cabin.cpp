//cabin.cpp
#include "cabin.h"

Cabin::Cabin(string position, string type, string name, int ID, string status){

	position = position;
};

void Cabin::PrintInfo(){

	CrewMember::PrintInfo();
	cout << "Position: " << position << endl;

};