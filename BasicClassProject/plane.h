//this is my header file for my plane class
#ifndef __PLANE_H__
#define __PLANE_H__
#include "header.h"

class Plane{

private:
	string make; // ie: boeing
	int model;	// ie: 747
	string tailNum; //ie: B171A
	int seatNum;
	int range;
	string status; // out, in, repair

public:
	Plane();
	~Plane() {};
	string GetMake() const {return make;};
	void SetMake(string make) {this->make = make;};
	int GetModel() const {return model;};
	void SetModel(int model) {this->model = model;};
	string GetTailNum() const {return tailNum;};
	void SetTailNum(string tailNum) {this->tailNum = tailNum;};
	int GetSeatNum() const {return seatNum;};
	void SetSeatNum(int seatNum) {this->seatNum = seatNum;};
	int GetRange() const {return range;};
	void SetRange(int range) {this->range =	range;};
	string GetStatus() const {return status;};
	void SetStatus(string status) {this->status = status;}; 
	
};

#endif