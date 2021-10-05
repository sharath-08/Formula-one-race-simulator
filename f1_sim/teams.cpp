#include<iostream>
#include<string>
#include"teams.h"
#include<vector>

Team::Team(){
	team_name="def name";
	team_principal="def principal";
	driver_1="driver1";
	driver_2="driver2";
}

Team::Team(std::string t_name,std::string t_principal,std::string color,std::string Driver_1,std::string Driver_2){
	team_name=t_name;
	team_principal=t_principal;
	team_color=color;
	driver_1=Driver_1;
	driver_2=Driver_2;
}

std::string Team::get_team_name(){//returns team name
	return team_name;
}

std::string Team::get_team_color(){
	return team_color;
}

std::string Team::get_team_principal(){
	return team_principal;
}


Team::~Team(){

	std::cout<<team_name<<" has been deleted"<<std::endl;
}
