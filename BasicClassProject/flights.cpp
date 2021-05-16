//flights function file
#include "flights.h"
#include "planes.h"
#include "crews.h"

 void Flights::AddFlight(){
	
 	time_t startTime;
 	time_t endTime;
 	int pilotID;
 	int copilotID;
 	int cabinMember1;
 	int cabinMember2;
 	int cabinMember3;
	int index;
 	string planeTailNum;
 	string airportStart;
 	string airportEnd;
 	int passengerNum;
 	string status = "available";
 	Crews crew;
 	Planes plane;
 	Flight newFlight;



 	cout << "Enter a pilot ID: ";
 	cin >> pilotID;
 	cout << endl;
 	newFlight.SetPilotID(pilotID);

 	cin.ignore();

 	cout << "Enter a Copilot ID: ";
 	cin >> copilotID;
 	cout << endl;
 	newFlight.SetCopilotID(copilotID);

 	cin.ignore();

 	cout << "Enter 3 Cabin members for the flight." << endl;
 	cout << "Cabin member 1: ";
 	cin >> cabinMember1;
 	newFlight.SetCabinMember1(cabinMember1);
 	cout << "Cabin member 2: ";
 	cin >> cabinMember2;
 	newFlight.SetCabinMember1(cabinMember2);
 	cout << "Cabin member 3: ";
 	cin >> cabinMember3;
 	newFlight.SetCabinMember1(cabinMember3);

 	cin.ignore();

 	cout << "Enter plane tail number for the flight: ";
 	cin >> planeTailNum;
 	newFlight.SetPlaneTailNum(planeTailNum);

 	cout << "Enter flight starting airport code(ie: LAX, JFK): ";
 	cin >> airportStart;
 	newFlight.SetAirportStart(airportStart);
 	newFlight.SetStartTime();
 	startTime = newFlight.GetStartTime();

 	cout << "Enter flight ending airport code(ie: LAX, JFK): ";
 	cin >> airportEnd;
 	newFlight.SetAirportStart(airportEnd);
 	newFlight.SetEndTime();
 	endTime = newFlight.GetEndTime();

 	cin. ignore();
 	cout << "Enter the number of passengers on this flight: ";
 	cin >> passengerNum;
 	newFlight.SetPassengerNum(passengerNum);

 	cout << "New flight added, setting status to available." << endl;
 	newFlight.SetStatus(status);

 	// cout << pilotID << endl;
 	// cout << copilotID << endl;
 	// cout << cabinMember1 << endl;
 	// cout << cabinMember2 << endl;
 	// cout << cabinMember3 << endl;
 	// cout << planeTailNum << endl;
 	// cout << airportStart << endl;
 	// cout << ctime(&startTime) << endl;
 	// cout << airportEnd << endl;
 	// cout << ctime(&endTime) << endl;
 	// cout << passengerNum << endl;
 	// cout << status << endl;


 	flights.push_back(newFlight);	
 };

// void Crews::Edit(){

// 	int index;
// 	string choice;
// 	string tempName;
// 	int tempID;
// 	string tempType;
// 	string tempStatus;
	
// 	index = Search();

// 	cout << "What would you like to edit? " << endl;
// 	cout << "name, ID, type, or status? ";
// 	cin >> choice;

// 	if(choice == "name"){

// 		cin.ignore();
// 		cout << "Enter name edit: ";
// 		getline(cin, tempName);
// 		crews[index].SetName(tempName);
// 		cout << endl;
// 	}
// 	if(choice == "ID"){

// 		cout << "Enter ID edit: ";
// 		cin >> tempID;
// 		crews[index].SetID(tempID);
// 		cout << endl;
// 	}
// 	if(choice == "type"){

// 		cout << "Enter type edit: ";
// 		cin >> tempType;
// 		crews[index].SetType(tempType);
// 		cout << endl;
// 	}
// 	if(choice == "status"){

// 		cout << "Enter status edit: ";
// 		cin >> tempStatus;
// 		crews[index].SetStatus(tempStatus);
// 		cout << endl;
// 	}
// 	else{
// 		cout << "Wrong choice try again..." << endl;
// 	}


// };

// void Crews::Delete(){

// 	int index;
// 	char choice;

// 	index = Search();

// 	cout << "Do you want to delete this?" << endl;
// 	cout << crews[index].GetName() << "\t" << crews[index].GetID() << "\t" << crews[index].GetType() << "\t" << crews[index].GetStatus() << endl; 
// 	cout << "(y - yes, n - no): ";
// 	cin >> choice;
// 	if(choice == 'y'){
// 		crews.erase(crews.begin()+index);
// 		cout << endl;
// 		cout << "Crew memeber data erased.";
// 	}
// 	else{

// 		cout << "Crew member not deleted..." << endl;
// 	}
// };

// int Crews::Search(){

// 	 int index;
// 	 int tempID;

// 	 cout << "Enter Crew member ID: ";
// 	 cin >> tempID;

// 	 for(int i = 0; i < crews.size(); ++i){

// 	 	if(tempID == crews[i].GetID()){

// 	 		cout << "Crew memeber found!" << endl;
// 	 		return i;
// 	 	}
	 	
// 	 }

// cout << endl;
// cout << "crew memeber not found" << endl;
// cout << endl;
// return -1;
// };



// void Crews::PrintAll(){


// 	for(int i = 0; i < crews.size(); ++i){

// 		cout << "Name: " << crews[i].GetName() << "\t" << "ID: " << crews[i].GetID() << endl;
// 	}
// };

// void Crews::PrintOne(){

// 	int index;
// 	int tempID;

// 	index = Search();

// 	if(index >= 0){

// 		cout << "Name: " << crews[index].GetName() << "\t" << "ID: " << crews[index].GetID() << "\t" << "Type: " << crews[index].GetType() << "\t" << "Status: " << crews[index].GetStatus() << endl;
// 	}

// };

void Flights::SaveFlightData(){

	ofstream out;

	out.open("flights.dat");

	out << flights.size() << endl;

	for(int i = 0; i < flights.size(); ++i){

		out << flights[i].GetPilotID() << endl;
		out << flights[i].GetCopilotID() << endl;
		out << flights[i].GetCabinMember1() << endl;
		out << flights[i].GetCabinMember2() << endl;
		out << flights[i].GetCabinMember3() << endl;
		out << flights[i].GetPlaneTailNum() << endl;
		out << flights[i].GetAirportStart() << endl;
		out << flights[i].GetStartTime() << endl;
		out << flights[i].GetAirportEnd() << endl;
		out << flights[i].GetEndTime() << endl;
		out << flights[i].GetPassengerNum() << endl;
		out << flights[i].GetStatus() << endl;
	}

	out.close();
};

void Flights::LoadFlightData(){

	ifstream fin;
	Flight load;
	int size;
	string name;
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
	string status;

	fin.open("flights.dat");
	if(fin.fail()){
		return;
	}

	fin >> size;
	for(int i = 0; i < size; ++i){

			fin >> pilotID;
			fin >> copilotID;
			fin >> cabinMember1;
			fin >> cabinMember2;
			fin >> cabinMember3;
			fin >> planeTailNum;
			fin >> airportStart;
			fin >> startTime;
			fin >> airportEnd;
			fin >> endTime;
			fin >> passengerNum;
			fin >> status;
			load.SetPilotID(pilotID);
			load.SetCopilotID(copilotID);
			load.SetCabinMember1(cabinMember1);
			load.SetCabinMember2(cabinMember2);
			load.SetCabinMember3(cabinMember3);
			load.SetPlaneTailNum(planeTailNum);
			load.SetAirportStart(airportStart);
			//load.SetStartTime();
					
			

			flights.push_back(load);
	}


	fin.close();
};