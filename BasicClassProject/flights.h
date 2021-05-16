//this is the flights class file

#ifndef __FLIGHTS_H__
#define __FLIGHTS_H__

#include "flight.h"

class Flights{

	private:
		vector<Flight> flights;
		

	public:
		int Search();
		void AddFlight();
		void EditFlight();
		void DeleteFlight();
		void PrintAllFlights();
		void PrintOneFlight();
		void SaveFlightData();
		void LoadFlightData();
};








#endif