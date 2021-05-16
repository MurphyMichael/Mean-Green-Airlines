//this is the crew function file
#include "crew.h"

CrewMember::CrewMember(){

	type = "none";
	name = "none";
	ID = 0000;
	status = "none";
};

void CrewMember::PrintInfo(){

	cout << "Job Type: " << type << endl;
	cout << "Name: " << name << endl;
	cout << "ID#: " << ID << endl;
	cout << "Status: " << status << endl;
		
};





