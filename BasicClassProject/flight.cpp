//this is the flight function file
#include "flight.h"

void Flight::SetStartTime(){

	time(&startTime);
	struct tm * thisTime = localtime(&startTime);

	int year;
	int month;
	int day;
	int hour;
	int minute;
	int num = -1;

	while(num != 0){
		cout << "Enter the year of the flight: ";
		cin >> year;
		thisTime->tm_year = year-1900; // initializing the year
		if(year > 2017){
			cout << "Enter the month of the flight(1-12): ";
			cin >> month;
			thisTime->tm_mon = month-1; // initializing the month

			cout << "Enter the day of the flight: ";
			cin >> day;
			thisTime->tm_mday = day; // initializing the day

			cout << "Enter the hour of the flight(00-23): ";
			cin >> hour;
			thisTime->tm_hour = hour; // initializing the hour

			cout << "Enter the minute of the flight(00-59):";
			cin >> minute;
			thisTime->tm_min = minute; // initializing the minute

			thisTime->tm_sec = 0; // initializing seconds

			startTime = mktime(thisTime);
			num = 0;
		}
		else{

			cout << "Year choice is a past year... try again." << endl;
		}
}

	// cout << "year: " << year << endl;
	// cout << "month: " << month << endl;
	// cout << "day: " << day << endl;
	// cout << "hour: " << hour << endl;
	// cout << "minute: " << minute << endl;

	// cout << ctime(&startTime) << endl; 
};

void Flight::SetEndTime(){

	time(&endTime);
	struct tm * thisTime = localtime(&endTime);

	int year;
	int month;
	int day;
	int hour;
	int minute;

	cout << "Enter the year the flight lands: ";
	cin >> year;
	thisTime->tm_year = year-1900; // initializing the year

	cout << "Enter the month the flight lands(1-12): ";
	cin >> month;
	thisTime->tm_mon = month-1; // initializing the month

	cout << "Enter the day the flight lands: ";
	cin >> day;
	thisTime->tm_mday = day; // initializing the day

	cout << "Enter the hour the flight lands(00-23): ";
	cin >> hour;
	thisTime->tm_hour = hour; // initializing the hour

	cout << "Enter the minute the flight lands(00-59):";
	cin >> minute;
	thisTime->tm_min = minute; // initializing the minute

	thisTime->tm_sec = 0; // initializing seconds

	endTime = mktime(thisTime);

	// cout << "year: " << year << endl;
	// cout << "month: " << month << endl;
	// cout << "day: " << day << endl;
	// cout << "hour: " << hour << endl;
	// cout << "minute: " << minute << endl;

	// cout << ctime(&endTime) << endl; 
};

