//this is my main for my program
#include "header.h"
#include "crew.h"
#include "crews.h"
#include "plane.h"
#include "planes.h"
#include "flight.h"
#include "flights.h"



void PrintMenu1(); // menu print function
void HeaderPrint(); // header print function

Crews c;
Planes p;
Flights f;


int main(){

	HeaderPrint();


	// variables for funtions and menu use
	int menuChoice = 0;
	char choiceType;
	


	// Load functions for the .dat files
	c.LoadCrewData();
	p.LoadPlaneData();

	cout << "Welcome to Mean Greens Airlines work Terminal!" << endl;
	cout << endl << endl;

	//switch case menu
	 
	
	PrintMenu1();

	while(cin >> menuChoice){

		cin.ignore();
		switch(menuChoice){

			case 1:
				cout << "What would you like to add?" << endl;
				cout << "(c - crew member, p - plane, f - flight): ";
				cin >> choiceType;
				if(choiceType == 'c'){
					c.AddCrewMember();
				}
				if(choiceType == 'p'){
					p.AddPlane();
				}
				if(choiceType == 'f'){
					f.AddFlight();
				}
			break;

			case 2:
				cout << "What would you like to Edit?" << endl;
				cout << "(c - crew member, p - plane, f - flight): ";
				cin >> choiceType;
				if(choiceType == 'c'){
					//c.EditCrewMember();
				}
				if(choiceType == 'p'){
					p.EditPlane();
				}
			break;

			case 3: 
				cout << "What would you like to delete?" << endl;
				cout << "(c - crew member, p - plane, f - flight): ";
				cin >> choiceType;
				if(choiceType == 'c'){
					int ID;
					cout << "Enter Crew Member ID: ";
					cin >> ID;
					c.DeleteCrewMember(ID);
					cout << "Crew member deleted." << endl;
				}
				if(choiceType == 'p'){
					p.DeletePlane();
				}
				break;

			case 4:
				cout << "What data would you like to print?" << endl;
				cout << "(c - crew member, p - plane, f - flight): ";
				cin >> choiceType;
				if(choiceType == 'c'){
					c.PrintAllCrewMembers();
				}
				if(choiceType == 'p'){
					p.PrintAllPlanes();
				}
			break;

			case 5:
				cout << "What data would you like to print?" << endl;
				cout << "(c - crew member, p - plane, f - flight): ";
				cin >> choiceType;
				if(choiceType == 'c'){
					//c.PrintOneCrewMember();
				}
				if(choiceType == 'p'){
					p.PrintOnePlane();
				}
			break;
			case 0:
			return 0;

			default:
				cout << "Wrong input..." << endl;
				cout << "Input menu choice: ";

		}
		cout << endl << endl;
		PrintMenu1();

		// Save functions for the .dat files
		c.SaveCrewData();
		p.SavePlaneData();
	}

return 0;
}



void PrintMenu1(){

	cout << "\t" << "What would you like to do?" << endl;
	cout << endl;
	cout << endl;
	cout << "\t" << "1 - Add" << endl;
	cout << "\t" << "2 - Edit" << endl;
	cout << "\t" << "3 - Delete" << endl;
	cout << "\t" << "4 - List all Data Entries" << endl;
	cout << "\t" << "5 - Data for one Entity" << endl;
	cout << "\t" << "Input 0 to quit" << endl;
	cout << endl;

	cout << "Input menu Choice: ";
};

void HeaderPrint(){
	
	cout << "           +----------------------------------------------+" << endl;
	cout << "           |      Computer Science and Engineering        |" << endl;
	cout << "           |       CSCE 1040 - Computer Science II        |" << endl;
	cout << "           |   Michael Murphy mwm0123 mwm0123@my.unt.edu  |" << endl;
	cout << "           +----------------------------------------------+" << endl;
};