//crews function file
#include "crews.h"
#include "pilot.h"
#include "copilot.h"
#include "cabin.h"
#include <iterator>
#include <typeinfo>

//this functions adds a crew member


void Crews::AddCrewMember(){
	
	string typeTemp;
	string nameTemp;
	int IDTemp;
	string statusTemp = "avaliable";
	string fiveCharRatingCode;
	string fourCharRatingCode;
	int flightHours;
	string cabinPosition;
	CrewMember *newCrewMember;


	cin.ignore();
	cout << "Enter crew member's job type (ie: Pilot, CoPilot, or Cabin): ";
	getline(cin, typeTemp);

		cin.ignore();
		cout << "Enter crew memeber's name: ";
		getline(cin, nameTemp);
		cout << endl;

		cout << "Enter crew memeber's ID number: ";
		cin >> IDTemp;
		cout << endl;

	if(typeTemp == "Pilot"){
		
		cout << "Enter pilot 5 character rating code: ";
		cin >> 	fiveCharRatingCode;
		cout << endl;

		cout << "Enter Pilot flight hours: ";
		cin >> flightHours;

		newCrewMember = new Pilot(fiveCharRatingCode, flightHours, typeTemp, nameTemp, IDTemp, statusTemp);
	}
	
	if(typeTemp == "Copilot"){
		cout << "Enter Copilot 4 character rating code: ";
		cin >> 	fourCharRatingCode;
		cout << endl;

		cout << "Enter Copilot flight hours: ";
		cin >> flightHours;

		newCrewMember = new Copilot(fourCharRatingCode, flightHours, typeTemp, nameTemp, IDTemp, statusTemp);
	}

	if(typeTemp == "Cabin"){
		cout << "Enter pilot 5 character rating code: ";
		cin >> 	cabinPosition;

		newCrewMember = new Cabin(cabinPosition, typeTemp, nameTemp, IDTemp, statusTemp);
	}
	crews.push_back(newCrewMember);
};

// this function edits one part of a crew object
// void Crews::EditCrewMember(){

// 	int index;
// 	string choice;
// 	string tempName;
// 	int tempID;
// 	string tempType;
// 	string tempStatus;
	
// 	index = SearchByID();

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

// // this deletes a crew object
void Crews::DeleteCrewMember(int ID){

	CrewMember *crewMember;

	for(auto i = crews.begin(); i != crews.end(); ++i){

		if((*i)->GetID() == ID){
			crews.erase(i);
		}
	}

	return;
	
};

// // searches for a crew object
CrewMember * Crews::SearchByID(int ID){

	 int index;
	 

	 CrewMember * findCrewMember;

	 

	 for(int i = 0; i < crews.size(); ++i){

	 	if(ID == crews[i]->GetID()){

	 		cout << "Crew member found!" << endl;
	 		return crews[i];
	 	}
	 	
	 }

cout << endl;
cout << "crew member not found" << endl;
cout << endl;
return NULL;
};


// prints all the crew objects
void Crews::PrintAllCrewMembers(){


	for(auto i = crews.begin(); i != crews.end(); ++i){

		cout << "Type: " << (*i)->GetType() << endl;
		cout << "Name: " << (*i)->GetName() << endl;
		cout << "ID#: " << (*i)->GetID() << endl;
		cout << "Status: " << (*i)->GetStatus() << endl;
		if(typeid(**i) == typeid (Pilot)){

			Pilot *pilot = dynamic_cast<Pilot*> (*i);
			cout << "Rating Code: " << pilot->GetRatingCodePilot() << endl;
			cout << "Flight Hours: " << pilot->GetFlightHoursPilot() << endl;
		}
		else if(typeid(**i) == typeid(Copilot)){

			Copilot * copilot = dynamic_cast<Copilot*> (*i);
			cout << "Rating Code: " << copilot->GetRatingCodeCopilot() << endl;
			cout << "Flight Hours: " << copilot->GetFlightHoursCopilot() << endl;

		}
		else if(typeid(**i) == typeid(Cabin)){

			Cabin * cabin = dynamic_cast<Cabin*> (*i);
			cout << "Position: " << cabin->GetPosition() << endl;
		}
	}
};

// searches for one crew member and prints the data of that crew member
// void Crews::PrintOneCrewMember(){

// 	int index;
// 	int tempID;

// 	cout << "Enter Crew member ID: ";
// 	 cin >> tempID;

// 	index = SearchByID(tempID);

// 	if(index >= 0){

// 		cout << "Name: " << crews[index].GetName() << "\t" << "ID: " << crews[index].GetID() << "\t" << "Type: " << crews[index].GetType() << "\t" << "Status: " << crews[index].GetStatus() << endl;
// 	}

// };

// // saves the crews data to a file
void Crews::SaveCrewData(){

	ofstream out;
	CrewMember * saveData;

	out.open("crews.dat");

	out << crews.size() << endl;

	for (auto it = crews.begin(); it != crews.end(); ++it){

		saveData = *it;

		out << saveData->GetType() << endl;
		out << saveData->GetName() << endl;
		out << saveData->GetID() << endl;
		out << saveData->GetStatus() << endl;

		if(typeid(**it) == typeid (Pilot)){

			Pilot *pilot = dynamic_cast<Pilot*> (saveData);
			out << pilot->GetRatingCodePilot() << endl;
			out << pilot->GetFlightHoursPilot() << endl;
		}
		else if(typeid(**it) == typeid(Copilot)){

			Copilot * copilot = dynamic_cast<Copilot*> (saveData);
			out << copilot->GetRatingCodeCopilot() << endl;
			out << copilot->GetFlightHoursCopilot() << endl;

		}
		else if(typeid(**it) == typeid(Cabin)){

			Cabin * cabin = dynamic_cast<Cabin*> (saveData);
			out << cabin->GetPosition() << endl;
		}
	}

	out.close();
};

// loads the data from a file into the program
void Crews::LoadCrewData(){

	ifstream fin;
	CrewMember * loadData;
	int size;
	string type;
	string name;
	int ID;
	string status;
	string fiveCharRatingCode;
	string fourCharRatingCode;
	int flightHours;
	string position;

	fin.open("crews.dat");
	if(fin.fail()){
		return;
	}

	fin >> size;
	for(int i = 0; i < size; ++i){

		fin >> type;
		fin >> name;
		fin >> ID;
		fin >> status;
		if(type == "Pilot"){

			fin >> fiveCharRatingCode;
			fin >> flightHours;
			Pilot * pilot = new Pilot(fiveCharRatingCode, flightHours, type, name, ID, status);			
			crews.push_back(pilot);
		}
		else if(type == "Copilot"){

			fin >> fourCharRatingCode;
			fin >> flightHours;
			Copilot * copilot = new Copilot(fourCharRatingCode, flightHours, type, name, ID, status);
			crews.push_back(copilot);
		}			
		else if(type == "Cabin"){
			fin >> position;
			Cabin * cabin = new Cabin(position, type, name, ID, status);
			crews.push_back(cabin);
		}

	}


	fin.close();
};