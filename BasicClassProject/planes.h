// this is the planes class header file
#ifndef __PLANES_H__
#define __PLANES_H__

#include "plane.h"

class Planes{

private:
	vector<Plane> planes;
public:
	Planes() {};
	~Planes() {};
	void AddPlane();
	void DeletePlane();
	void EditPlane();
	void PrintAllPlanes();
	void PrintOnePlane();
	int SearchByTailNum();
	void LoadPlaneData();
	void SavePlaneData();

	
};




#endif