#pragma once
#include"cars.h"
#include"teams.h"

class driver{
protected:
	//protected variables
	std::string driver_name;//driver name
	int driver_number;	//driver number


public:
	//constructors
	driver();
	driver(std::string driver_name_inp,int driver_number,std::string team,float skill);
	~driver();
	//variables
	float skill_level;	//skill-level affects lap time
	std::string team_name;
	double lap_time;
	cars car_driver(int driver_number,std::string driver_name);

	//functions
	std::string get_driver_name();
	int get_driver_number();
	float get_skill_level();
	std::string get_team_name();
	void change_team_name(std::string team);
	void change_skill_level(float skill);

};