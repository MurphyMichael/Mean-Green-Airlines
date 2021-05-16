//copilot.cpp

#include "copilot.h"

Copilot::Copilot (string fourCharRatingCode, int flightHoursCopilot, string type, string name, int ID, string status){

	fourCharRatingCode = fourCharRatingCode;
	flightHoursCopilot = flightHoursCopilot;
};

void Copilot::PrintInfo(){

	CrewMember::PrintInfo();
	cout << "Rating Code: " << fourCharRatingCode << endl;
	cout << "Flight Hours: " << flightHoursCopilot << endl;
};