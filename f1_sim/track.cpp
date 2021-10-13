#include"track.h"
#include<string>
#include<iostream>

Track::Track(int track_choice){
track_in_use=track_choice;
track_used_name=track_available[track_in_use];
track_used_country=track_country[track_in_use];
}

Track::~Track(){
std::cout<<track_used_name<<" deleted"<<std::endl;
}

std::string Track::get_track_name(){
return track_used_name;
}

double Track::get_fastest_lap(){
return track_fastest_lap[track_in_use];
}

//void change_track(int new_track_choice){
//track_in_use=new_track_choice;
//std::cout<<"track changed to"<<std::endl;
//}
