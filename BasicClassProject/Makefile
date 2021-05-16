this: homework4

homework4: main.o crew.o pilot.o copilot.o cabin.o crews.o plane.o planes.o flight.o flights.o
	g++ main.o crew.o pilot.o copilot.o cabin.o crews.o plane.o planes.o flight.o flights.o -o homework4

main.o: main.cpp crew.h pilot.o copilot.h cabin.h crews.h plane.h planes.h flight.h flights.h
	g++ -c main.cpp

crew.o: crew.cpp crew.h
	g++ -c crew.cpp

crews.o: crews.cpp crew.h crews.h pilot.h copilot.h cabin.h
	g++ -std=c++11 -c crews.cpp

pilot.o: pilot.cpp crew.h pilot.h
	g++ -c pilot.cpp

copilot.o: copilot.cpp crew.h copilot.h
	g++ -c copilot.cpp

cabin.o: cabin.cpp crew.h cabin.h
	g++ -c cabin.cpp

plane.o: plane.cpp plane.h
	g++ -c plane.cpp

planes.o: planes.cpp plane.h planes.h
	g++ -c planes.cpp

flight.o: flight.cpp flight.h
	g++ -c flight.cpp

flights.o: flights.cpp flight.h flights.h
	g++ -c flights.cpp

clean:
	rm *.o homework4