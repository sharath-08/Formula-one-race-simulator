#include "cars.h"
#include<iostream>
#include<string>

cars::cars(){//default constructor
	car_number=0;//sets id number of car
	tire_level=100;//sets tire level of car
	car_driver="";//sets car driver as default driver
	fuel_level=100;//sets fuel level to default
	tire_in_use=0;
}


cars::cars(int c_number,std::string driver){//constructor with arguments
	car_number=c_number;//sets car id number
	car_driver=driver;//sets the name of driver of car
	fuel_level=100;//sets the fuel level of car
	tire_level=100;
	tire_in_use=0;
}
float cars::get_tire_level(){ //returns tire level of car
	return tire_level;
}
float cars::get_fuel_level(){//returns fuel level of car
	return fuel_level;
}
int cars::get_tire(){
	return tire_in_use;//returns an integer of tire used. Used to acces tire_available array
}
void cars::print_tire_in_use(){
	std::cout<<tire_available[tire_in_use]<<std::endl;
}

void cars::change_tires(int tire_choice){
	if(tire_choice<4 && tire_choice>-1){
switch(tire_choice){//sets tire level based on tire choice
		case soft: tire_in_use=soft;break;//sets tire to soft
		case medium:tire_in_use=medium;break;//sets tire to medium
		case hard:tire_in_use=hard;break;//sets tire to hard
		case wet:tire_in_use=wet;break;//sets tire to wet
	}
	tire_level=100;
	std::cout<<"Tire changed to "<<tire_available[tire_in_use]<<std::endl;
	}
	else{
		std::cout<<"ERROR: wrong tyre_type input, tyre remains unchanged"<<std::endl;
	}
}


std::string cars::get_driver(){
	return car_driver;
}


void cars::change_driver(std::string driver_change){
	car_driver=driver_change;
	std::cout<<"driver changed to "<<driver_change<<std::endl;
}

void cars::print_car_number(){
	std::cout<<car_number<<std::endl;
}

double cars::tire_deg(int lap_count){
	//regresses tire and fuel levels at a constant rate
	tire_level=tire_level-((100/lap_count));
	return tire_level;
}

double cars::fuel_deg(int lap_count){
	fuel_level=fuel_level-((100/lap_count));
	return fuel_level;
}



cars::~cars(){
	std::cout<<car_number<<"destroyed"<<std::endl;
}

