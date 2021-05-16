//planes function file
#include "planes.h"

// adds a plane object
void Planes::AddPlane(){

	string makeTemp;
	int modelTemp;
	string tailNumTemp;
	int seatNumTemp;
	int rangeTemp;
	string statusTemp;
	Plane newPlane;

	cin.ignore();
	cout << "Enter plane's make: ";
	getline(cin, makeTemp);
	newPlane.SetMake(makeTemp);
	cout << endl;

	cout << "Enter plane's model number: ";
	cin >> modelTemp;
	newPlane.SetModel(modelTemp);
	cout << endl;

	cin.ignore();
	cout << "Enter plane's tail number: ";
	getline(cin, tailNumTemp);
	newPlane.SetTailNum(tailNumTemp);
	cout << endl;

	cout << "Enter plane's seat count: ";
	cin >> seatNumTemp;
	newPlane.SetSeatNum(seatNumTemp);
	cout << endl;

	cout << "Enter plane's flight range: ";
	cin >> rangeTemp;
	newPlane.SetRange(rangeTemp);
	cout << endl;

	statusTemp = "available";
	cout << "Plane's status set to available..." << endl;
	newPlane.SetStatus(statusTemp);

	// cout << newPlane.GetMake() << endl;
	// cout << newPlane.GetModel() << endl; 
	// cout << newPlane.GetTailNum() << endl;
	// cout << newPlane.GetSeatNum() << endl; 
	// cout << newPlane.GetRange() << endl; 
	// cout << newPlane.GetStatus() << endl;

	planes.push_back(newPlane);
};

// edits one part from a single plane object
void Planes::EditPlane(){

	string choice;
	string tempMake;
	int tempModel;
	string tempTail;
	int tempSeatNum;
	int tempRange;
	string tempStatus;
	int index = SearchByTailNum();

	cin.ignore();
	cout << "What would you like to edit on this plane?" << endl;
	cout << "(make, model, tail number, seat amount, range or status?)" << endl;
	getline(cin, choice);

	if(choice == "make"){


		cout << "Enter plane make edit: ";
		getline(cin, tempMake);
		planes[index].SetMake(tempMake);
	}
	if(choice == "model"){

		cout << "Enter plane model edit: ";
		cin >> tempModel;
		planes[index].SetModel(tempModel);
	}
	if(choice == "tail number"){

		cout << "Enter plane tail number edit: ";
		cin >> tempTail;
		planes[index].SetTailNum(tempTail);
	}
	if(choice == "seat amount"){

		cout << "Enter plane seat amount edit: ";
		cin >> tempSeatNum;
		planes[index].SetSeatNum(tempSeatNum);
	}
	if(choice == "range"){

		cout << "Enter plane range edit: ";
		cin >> tempRange;
		planes[index].SetModel(tempRange);
	}
	if(choice == "status"){

		cout << "Enter plane range edit: ";
		cin >> tempStatus;
		planes[index].SetStatus(tempStatus);
	}
	else{
		cout << "Wrong choice try again..." << endl;
	}

};

// deletes a plane object
void Planes::DeletePlane(){

	int index = SearchByTailNum();
	char choice;

	cout << "Do you want to delete this plane's Info?" << endl;
	cout << "\t" << planes[index].GetMake();
	cout << "\t" << planes[index].GetModel();
	cout << "\t" << planes[index].GetTailNum();
	cout << "\t" << planes[index].GetSeatNum();
	cout << "\t" << planes[index].GetRange();
	cout << "\t" << planes[index].GetStatus() << endl; 
	cout << "(y - yes, n - no)" << endl;

	cin >> choice;

	if(choice == 'y'){
		planes.erase(planes.begin()+index);
		cout << endl;
		cout << "Plane data erased.";

	}
}

// searches for a plane object
int Planes::SearchByTailNum(){

	int index;
	string tempTail;

	cout << "Enter Plane tail number: ";
	cin >> tempTail;

	for(int i = 0; i < planes.size(); ++i){

	 	if(tempTail == planes[i].GetTailNum()){

	 		cout << "Plane found!" << endl;
	 		return i;
	 	}
	 	
	}

cout << endl;
cout << "plane not found" << endl;
cout << endl;
return -1;
};

//prints all plane objects
void Planes::PrintAllPlanes(){

	for(int i = 0; i < planes.size(); ++i){

		cout << "\t" << planes[i].GetMake();
		cout << "\t" << planes[i].GetModel();
		cout << "\t" << planes[i].GetTailNum() << endl;
	}
};

//prints one plane object
void Planes::PrintOnePlane(){

	int index = SearchByTailNum();

	cout << "\t" << planes[index].GetMake();
	cout << "\t" << planes[index].GetModel();
	cout << "\t" << planes[index].GetTailNum();
	cout << "\t" << planes[index].GetSeatNum();
	cout << "\t" << planes[index].GetRange();
	cout << "\t" << planes[index].GetStatus() << endl;

};

//saves all the data from the plane objects on to a file
void Planes::SavePlaneData(){

	ofstream out;

	out.open("planes.dat");

	out << planes.size() << endl;

	for(int i = 0; i < planes.size(); ++i){

		out << planes[i].GetMake() << endl;
		out << planes[i].GetModel() << endl;
		out << planes[i].GetTailNum() << endl;
		out << planes[i].GetSeatNum() << endl;
		out << planes[i].GetRange() << endl;
		out << planes[i].GetStatus() << endl;
	}

	out.close();
};


// loads in data from a file of all the previous plane objects
void Planes::LoadPlaneData(){

	ifstream fin;
	Plane airplane;
	string make;
	int size;
	int model;
	string tailNum;
	int seatNum;
	int range;
	string status;

	fin.open("planes.dat");
	if(fin.fail()){
		return;
	}

	fin >> size;
	for(int i = 0; i < size; ++i){

			fin.ignore();
			fin >> make;
			fin >> model;
			fin >> tailNum;
			fin >> seatNum;
			fin >> range;
			fin >> status;
			airplane.SetMake(make);
			airplane.SetModel(model);
			airplane.SetTailNum(tailNum);
			airplane.SetSeatNum(seatNum);
			airplane.SetRange(range);
			airplane.SetStatus(status);

			planes.push_back(airplane);
	}


	fin.close();
};