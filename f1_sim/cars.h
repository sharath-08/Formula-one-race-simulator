#pragma once
#include <string>


class cars{
protected:
	int car_number;

public:
	//constructors 
	cars();
	cars(int c_number,std::string driver);


	//variables
	std::string car_driver;//stores name of driver
	//std::string car_colors;//stores color of car
	enum tires{soft,medium,hard,wet};//to select tires easily
	std::string tire_available[4]={"Soft","Medium","Hard","Wet"};
	float fuel_level;
	float tire_level;//stores the tire choice as an int value, to access elements in tire_available string array
	int tire_in_use;

	//functions
	float get_tire_level();
	float get_fuel_level();
	int get_tire();
	void print_tire_in_use();
	void change_tires(int tire_select);//function to change tires of car
	std::string get_driver();
	void change_driver(std::string driver_change);
	void delete_car();
	void print_car_number();
	double tire_deg(int lap_count);//reduces tire level using linear regression
	double fuel_deg(int lap_count);//reduces fuel level using linear regression
	~cars();
};

