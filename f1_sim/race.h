#pragma once
#include"track.h"
#include"cars.h"
#include"driver.h"
#include<string>
//#include<vector.h>

class Race{
private:
	std::string driver_names[5]={"S.VETTEL","M.SCHUMACHER","F.ALONSO","L.HAMILTON","A.SENNA"};
	std::string team_names[5]={"FERRARI","ASTON MARTIN","MCLAREN","MERCEDES-AMG","MCLAREN"};
	int car_numbers[5]={5,13,7,44,6};
	float skill_levels[5]={95,96,94,93,92};

public:
	//constructors
	Race(int track_choice,int number_of_laps);

	//variables to build race
	Track track_used;
	driver driver_list[5];
	cars car_list[5];
	int laps;

	//variables for simualation
	//std::vector<<double<<
	double (*car_lap_times)[5];
	void simulate_race();
	int current_lap;
	//float simulate_lap_times(track_choice,number_of_laps);
	void print_lap_times();
	~Race();
};