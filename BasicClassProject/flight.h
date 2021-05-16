//this is the file for the flight class
#ifndef __FLIGHT_H__
#define __FLIGHT_H__

#include "header.h"
#include "crew.h"
#include "crews.h"
#include "plane.h"
#include "planes.h"

class Flight{

private:
	time_t startTime;
	time_t endTime;
	int pilotID;
	int copilotID;
	int cabinMember1;
	int cabinMember2;
	int cabinMember3;
	string planeTailNum;
	string airportStart;
	string airportEnd;
	int passengerNum;
	string status; //ie: active, cancelled, completed

public:
	Flight(){};
	~Flight() {};
	time_t GetStartTime() const {return startTime;}
	void SetStartTime();
	time_t GetEndTime() const {return endTime;};
	void SetEndTime();
	int GetPilotID() const {return pilotID;};
	void SetPilotID(int pilotID) {this->pilotID = pilotID;};
	int GetCopilotID() const {return copilotID;};
	void SetCopilotID(int copilotID) {this->copilotID = copilotID;};
	int GetCabinMember1() const {return cabinMember1;};
	void SetCabinMember1(int cabinMember1) {this->cabinMember1 = cabinMember1;};
	int GetCabinMember2() const {return cabinMember2;};
	void SetCabinMember2(int cabinMember2) {this->cabinMember2 = cabinMember2;};
	int GetCabinMember3() const {return cabinMember3;};
	void SetCabinMember3(int cabinMember3) {this->cabinMember3 = cabinMember3;};
	string GetPlaneTailNum() const {return planeTailNum;};
	void SetPlaneTailNum(string planeTailNum) {this->planeTailNum = planeTailNum;};
	string GetAirportStart() const {return airportStart;};
	void SetAirportStart(string airportStart) {this->airportStart = airportStart;};
	string GetAirportEnd() const {return airportEnd;};
	void SetAirportEnd(string airportEnd) {this->airportEnd = airportEnd;};
	int GetPassengerNum() const {return passengerNum;};
	void SetPassengerNum(int passengerNum) {this->passengerNum = passengerNum;};
	string GetStatus() const {return status;};
	void SetStatus(string status) {this->status = status;};
};

#endif