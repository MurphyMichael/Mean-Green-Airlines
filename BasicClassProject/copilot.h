//copilot.h
#ifndef __COPILOT_H__
#define __COPILOT_H__
#include "crew.h"


class Copilot : public CrewMember{

private:
	string fourCharRatingCode;
	int flightHoursCopilot;
public:
	Copilot(string fourCharRatingCode, int flightHoursCopilot, string type, string name, int ID, string status);
	string GetRatingCodeCopilot() const {return fourCharRatingCode;};
	void SetRatingCodeCopilot(string fourCharRatingCode) {this->fourCharRatingCode = fourCharRatingCode;};
	int GetFlightHoursCopilot() const {return flightHoursCopilot;};
	void SetFlightHoursCopilot(int flightHoursCopilot) {this->flightHoursCopilot = flightHoursCopilot;};
	void PrintInfo();
};

#endif