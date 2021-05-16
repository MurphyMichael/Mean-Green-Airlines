//pilot.h


#ifndef __PILOT_H__
#define __PILOT_H__

#include "crew.h"
#include "header.h"

class Pilot : public CrewMember{

private:
	string fiveCharRatingCode;
	int flightHoursPilot;
public:
	Pilot(string fiveCharRatingCode, int flightHoursPilot, string type, string name, int ID, string status);
	string GetRatingCodePilot() const {return fiveCharRatingCode;};
	void SetRatingCodePilot(string fiveCharRatingCode) {this->fiveCharRatingCode = fiveCharRatingCode;};
	int GetFlightHoursPilot() const {return flightHoursPilot;};
	void SetFlightHoursPilot(int flightHoursPilot) {this->flightHoursPilot = flightHoursPilot;};
	void PrintInfo();
};

#endif