output: race_test.o race.o driver.o cars.o track.o
	g++ race_test.o race.o driver.o cars.o track.o -o output

race_test.o: race_test.cpp
	g++ -c race_test.cpp

race.o: race.cpp race.h
	g++ -c race.cpp 

driver.o: driver.cpp driver.h
	g++ -c driver.cpp

cars.o: cars.cpp cars.h
	g++ -c cars.cpp

track.o: track.cpp track.h
	g++ -c track.cpp

clean: 
	rm *.o output