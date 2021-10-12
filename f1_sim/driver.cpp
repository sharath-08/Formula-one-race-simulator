#include"driver.h"
#include<string>
#include<iostream>


driver::driver(){
driver_name="";
	driver_number= 0;
	skill_level=0;//factoring 
	team_name="";
	lap_time=0;
	//car_driver(driver_number,driver_name);
}


driver::driver(std::string driver_name_inp,int number,std::string team,float skill){
	driver_name=driver_name_inp;
	driver_number= number;
	skill_level=(1-skill);//factoring 
	team_name=team;
	lap_time=0;
	//car_driver(driver_number,driver_name);
}



std::string driver::get_driver_name(){
	return driver_name;
}


int driver::get_driver_number(){
	return driver_number;
}

float driver::get_skill_level(){
	return skill_level;
}

std::string driver::get_team_name(){
return team_name;
}

void driver::change_team_name(std::string team){
	team_name=team;
}

void driver::change_skill_level(float skill){
	skill_level=skill;
}

driver::~driver(){
	std::cout<<driver_name<<" destroyed"<<std::endl;
}