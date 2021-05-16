//pilot.cpp
#include "pilot.h"

Pilot::Pilot (string fiveCharRatingCode, int flightHoursPilot, string type, string name, int ID, string status){

	fiveCharRatingCode = fiveCharRatingCode;
	flightHoursPilot = flightHoursPilot;
};

void Pilot::PrintInfo(){

	CrewMember::PrintInfo();
	cout << "Rating Code: " << fiveCharRatingCode << endl;
	cout << "Flight Hours: " << flightHoursPilot << endl;
};